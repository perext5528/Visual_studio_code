//#include <stdio.h>
//
//void main() {
//	int arr[] = { 6, 3, 11, 9, 12, 2, 8, 15, 18, 10, 7, 14 };
//	int lower[12], upper[12];
//	int pivot = arr[0];
//	int low = 0, high = 11, point=0;
//	int i = 0, j = 0;
//	i = low + 1, j = high;
//	do {
//		while (arr[i] < pivot) i++;
//		while (arr[j] > pivot) j--;
//		if (i < j) {
//			int temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//		}
//	} while (i < j);
//
//	int temp = arr[j];
//	arr[j] = arr[0];
//	arr[0] = temp;
//
//	printf("turn 1\n");
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
//		printf("%d ", arr[i]);
//	}
//	/////////////////////////
//	lower[point] = j + 1;
//	upper[point] = 11;
//	//point++;
//
//	pivot = arr[0];
//	i = pivot + 1;
//	j--;
//	do {
//		while (arr[i] < pivot) i++;
//		while (arr[j] > pivot) j--;
//		if (i < j) {
//			int temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//		}
//	} while (i < j);
//
//	printf("\nturn 2\n");
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
//		printf("%d ", arr[i]);
//	}
//	/////////////////////////
//	pivot = arr[lower[point]];
//	i = lower[point] + 1;
//	j = upper[point];
//	do {
//		while (arr[i] < pivot) i++;
//		while (arr[j] > pivot) j--;
//		if (i < j) {
//			int temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//		}
//	} while (i < j);
//
//	temp = arr[j];
//	arr[j] = arr[lower[point]];
//	arr[lower[point]] = temp;
//
//	printf("\nturn 3\n");
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
//		printf("%d ", arr[i]);
//	}
//}