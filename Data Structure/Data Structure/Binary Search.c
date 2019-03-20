//#include <stdio.h>
//
//void main() {
//	//배열, 변수 초기화
//	int arr[] = { 1, 7, 14, 17, 26, 59, 63, 77, 79, 87, 88, 90 };
//	int lower = 1, higher = 12, m;
//
//	printf("1. 찾고자 하는 키 값 : 77\n");	//키 값이 77인 경우
//
//	int key1 = 77;	//변수 초기화
//	int i1 = 0;
//
//	while (lower <= higher) {
//		m = (lower + higher) / 2;
//		if (key1 > arr[m])
//			lower = m + 1;
//		else if (key1 = arr[m]) {
//			i1 = m;
//			break;
//		}
//		else if (key1 < arr[m])
//			higher = m - 1;
//		else;
//	}
//
//	if (i1 == 0)
//		printf("   해당 키 값의 위치 : arr[%d]\n\n", i1);
//	else
//		printf("   해당 키 값이 존재하지 않습니다.\n\n");
//
//
//	printf("2. 찾고자 하는 키 값 : 15\n");	//키 값이 15인 경우
//
//	int key2 = 15;	//변수 초기화
//	int i2 = 0;
//
//	while (lower <= higher) {
//		m = (lower + higher) / 2;
//		if (key2 > arr[m])
//			lower = m + 1;
//		else if (key2 = arr[m]) {
//			i2 = m;
//			break;
//		}
//		else if (key2 < arr[m])
//			higher = m - 1;
//
//		else;
//	}
//
//	if (i2 == 0)
//		printf("   해당 키 값의 위치 : arr[%d]\n\n", i2);
//	else
//		printf("   해당 키 값이 존재하지 않습니다.\n\n");
//}