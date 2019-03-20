//#include <stdio.h>
//void main() {
//	int data[] = { 6, 3, 11, 9, 12, 2, 8, 15, 18, 10, 7, 14 };
//	int Pointerstack[2][12] = { 0 };
//	int length = (sizeof(data) / sizeof(int)) - 1;
//	int topPointer = 0, pivotPointer = 0, pivot = 0, temp = 0;
//	int sw = 1;
//	int lowPointer=pivotPointer+1, upperPointer=length;
//
//	while (pivotPointer != length) {
//		
//		while (sw == 1) {
//			while (data[lowPointer] <= data[pivotPointer]) lowPointer++;
//			while (data[upperPointer] >= data[pivotPointer]) upperPointer--;
//			if (lowPointer < upperPointer) {
//				temp = data[lowPointer];
//				data[lowPointer] = data[upperPointer];
//				data[upperPointer] = temp;
//			}
//			else
//				sw = 0;
//		}
//		lowPointer--;
//		temp = data[lowPointer];
//		data[lowPointer] = data[pivotPointer];
//		data[pivotPointer] = temp;
//
//		Pointerstack[0][topPointer] = lowPointer + 1;
//		Pointerstack[1][topPointer] = upperPointer;
//		topPointer++;
//		sw = 1;
//
//	}
//	for (int i = 0; i < length; i++) {
//		printf("%3d", data[i]);
//	}
//}