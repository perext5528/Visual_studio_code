//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main() {
//	int test, i = 0;
//	int a, b = 0;
//	int henri[100];
//	float n = 2;
//	float c = 0;
//	float d = 0;
//	int arr[100];
//	int g = 0;
//	float f= 0;
//	float sum = 0;
//	float temp = 0;
//
//	scanf("%d", &test);
//	for (int t = 0; t < test; t++) {
//		scanf("%d", &a);
//		scanf("%d", &b);
//		c = (float)a / b;
//		d = (float)1 / n;
//		if (c > d) {
//			f = c - d;
//		}
//		do {
//			
//			while (f > d) {
//				temp = f - d;
//				n++;
//			}
//			arr[i] = n;
//			i++;
//
//			for (int j = 0; j < i; j++) {
//				g = arr[j];
//				sum += (float)1 / g;
//			}
//			
//		} while (c == sum);
//	}
//
//	for (int j = 0; j < i-1; j++) {
//		for (int k = 0; k < i - 1; k++) {
//			if (arr[k] < arr[k + 1]) {
//				henri[j] = arr[k + 1];
//			}
//		}
//	}
//	for (int j = 0; j < i; j++) {
//		printf("%d", henri[j]);
//	}
//}