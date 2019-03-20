//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void main() {
//	int arr[] = { 0, 5, 26, 37, 1, 61, 11, 59 };
//	int i, j, k, l;
//	int atemp = 0, btemp = 0, count = 0;
//
//	printf("Default Data : ");
//	for (k = 1; k < 8; k++) {
//		printf("%d ", arr[k]);
//	}
//	puts("\n");
//
//	for (l = 7; l > 0; l--) {
//		count += 1;
//
//		for (i = l/2; i > 0; i--) {
//			atemp = arr[i];
//			j = 2 * i;
//			while (j <= l) {
//				if ((j < l) && (arr[j] < arr[j + 1])) {
//					j += 1;
//				}
//				if (atemp < arr[j]) {
//					arr[j / 2] = arr[j];
//					j *= 2;
//				}
//				else {
//					break;
//				}
//				arr[j / 2] = atemp;
//			}
//			
//		}
//
//		puts("");
//		printf("%d회전 : ", count);
//		for (k = 1; k < 8; k++) {
//			printf("%d ", arr[k]);
//		}
//		puts("");
//
//		btemp = arr[1];
//		arr[1] = arr[l];
//		arr[l] = btemp;
//		
//		printf("%d교환 : ", count);
//		for (k = 1; k < 8; k++) {
//			printf("%d ", arr[k]);
//		}
//		puts("\n");
//
//	}
//
//	printf("Result Data : ");
//	for (k = 1; k < 8; k++) {
//		printf("%d ", arr[k]);
//	}
//	//scanf("%d", k);
//}