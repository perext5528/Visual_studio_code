//#include <stdio.h>
//void main() {
//	int data[] = { 6, 3, 11, 9, 12, 2, 8, 15, 18, 10, 7, 14 };
//	int lstack[11] = { 0 }, ustack[11] = { 0 };
//	int m = 0, n = 12;
//	int i, j, temp;
//	int top = 0;
//
//	lstack[0] = m;
//	ustack[0] = n;
//
//	while (top > -1) {
//
//		m = lstack[top];
//		n = ustack[top];
//		top--;
//		if (m < n) {
//			i = m;
//			j = n;
//
//			i++;
//			while (data[i] < data[m]) i++;
//			j--;
//			while (data[j] > data[m]) j--;
//			if (i < j) {
//				temp = data[i];
//				data[i] = data[j];
//				data[j] = temp;
//			}
//			
//			while (i < j) {
//				i++;
//				while (data[i] < data[m]) i++;
//				j--;
//				while (data[j] > data[m]) j--;
//				if (i < j) {
//					temp = data[i];
//					data[i] = data[j];
//					data[j] = temp;
//				}
//			}
//
//			temp = data[m];
//			data[m] = data[j];
//			data[j] = temp;
//
//			if (j + 1 < n) {
//				top++;
//				lstack[top] = j + 1;
//				ustack[top] = n;
//
//			}
//			if (j - 1 > m) {
//				top++;
//				lstack[top] = m;
//				ustack[top] = j - 1;
//
//			}
//
//		}
//	}
//	for (int i = 0; i < 12; i++)
//		printf("%3d", data[i]);
//}