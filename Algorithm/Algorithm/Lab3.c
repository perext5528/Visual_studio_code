//#include <stdio.h>
//
//void main() {
//	int data[] = { 6,3,11,9, 12, 2, 8, 15, 18, 10, 7, 14 };
//	int ls[12], us[12];
//	int top = 0, m = 0, n = 11;
//	int i, j, temp;
//	//i = m, j = n;
//
//	while (m < n) {
//		i = m, j = n;
//		while (i < j) {
//			while (data[i] <= data[m]) i+=1;
//			while (data[j] >= data[m]) j-=1;
//			if (j < 0) j++;
//			if (i < j) {
//				temp = data[i];
//				data[i] = data[j];
//				data[j] = temp;
//				
//			}
//		}
//		if (data[j] < data[m]) {
//			temp = data[m];
//			data[m] = data[j];
//			data[j] = temp;
//		}
//
//		ls[top] = i + 1;
//		us[top] = n;
//		top++;
//		if((m<n)) n = j - 1;
//
//		if (!(m < n)) {
//			top--;
//			m = ls[top];
//			n = us[top];			
//		}
//
//	}
//	for (int i = 0; i < 12; i++) {
//		printf("%2d ", data[i]);
//	}
//}
