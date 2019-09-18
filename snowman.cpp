#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
int* snowman(int*x , int*c,int n) {
	int* d = new int[n];
	int i, j, k;
/*----------------ªì©l¤Æ--------------------*/
	for (k = 0; k < n; k++) {
		d[k] = 0;
	}
/*------------------------------------------*/
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
		    x[i] = x[i] - c[j];
			if (x[i] < 0 || x[i] == 0) {
				d[i] = j + 1;
				break;
			}
		}
		if (x[i] > 0) {
			d[i] = -1;
		}
	}
	return d;
	delete[] d;
}
void main() {
	int day,i;
	int* ans;
	cin >> day;
	int* x = (int *)malloc(day * sizeof(int));
	int* c = (int *)malloc(day * sizeof(int));
	for (i = 0; i < day; i++) {
		cin >> x[i];
	}
	for (i = 0; i < day; i++) {
		cin >> c[i];
	}
	ans = snowman(x, c, day);
	for (i = 0; i < day; i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
	free(x);
	free(c);
	system("pause");
}


