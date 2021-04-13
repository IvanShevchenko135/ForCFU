#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int n, a[100040], b[100040], c[201000], k;

void quickSort(int arr[], int l, int r) {
    int i = l, j = r;
    int tmp;
    int v = arr[(l+r)/2];
    while (i <= j) {
        while (arr[i] < v) i++;
        while (arr[j] > v) j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++; j--;
        }
    }
    if (l < j) quickSort(arr, l, j);
    if (i < r) quickSort(arr, i, r);
}

int main() {
	scanf("%d", &n);
        for (int j = 0; j < n; j++) scanf("%d", &a[j]);
        scanf("%d", &k);
        for (int j = 0; j < k; j++) scanf("%d", &b[j]);
        for (int i = 0; i < n; i++) c[i] = a[i];
        for (int i = n; i < n+k; i++) c[i] = b[i-n];
        int sz = n+k;
        quickSort (c, 0, sz-1);
        for (int i = 0; i < n+k; i++) printf("%d ", c[i]);
	return 0;
}