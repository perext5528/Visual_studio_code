//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void main() {
//	int arr[100] = { 0, };
//	int i, j, k, l;
//	int atemp = 0, btemp = 0, count = 0;
//	int input = 0, subs = 1, sw = 1;	//input : 데이터 입력, subs : 배열 첨자, sw : while문 제어
//	
//	printf("      Heap Sort\n\n");
//	
//	printf("Please Input Data (EXIT : -1)\n>>>");
//
//	while (sw) {	//데이터 입력
//		scanf("%d", &input);
//
//		if (input == -1)	//-1 입력 시 while문 종료
//			sw = 0;
//
//		else {	//배열에 데이터 입력
//			arr[subs] = input;
//			subs++;
//			printf("Please Input Data (EXIT : -1)\n>>>");
//		}
//	}
//
//	puts("");
//	printf("Default Data : ");	//입력된 데이터 출력
//	for (k = 1; k < subs; k++) {
//		printf("%d ", arr[k]);
//	}
//	puts("\n");
//
//	for (l = subs - 1; l > 0; l--) {	//힙 정렬
//		count += 1;	//회전횟수 체크
//
//		for (i = l / 2; i > 0; i--) {
//			atemp = arr[i];
//			j = 2 * i;
//
//			while (j <= l) {
//				if ((j < l) && (arr[j] < arr[j + 1]))
//					j += 1;
//
//				if (atemp < arr[j]) {
//					arr[j / 2] = arr[j];
//					j *= 2;
//				}
//
//				else
//					break;
//
//				arr[j / 2] = atemp;
//			}
//		}
//
//		puts("");
//		printf("[%d] Turn : ", count);	//회전 종료 시 데이터 출력
//		for (k = 1; k < subs; k++)
//			printf("%d ", arr[k]);
//		puts("");
//
//		btemp = arr[1];
//		arr[1] = arr[l];
//		arr[l] = btemp;
//
//		printf("[%d] Swap : ", count);	//교환된 데이터 출력
//		for (k = 1; k < subs; k++)
//			printf("%d ", arr[k]);
//		puts("\n");
//
//	}
//
//	printf("Result Data : ");	//결과 데이터 출력
//	for (k = 1; k < subs; k++)
//		printf("%d ", arr[k]);
//
//	scanf("%d", &subs);	//콘솔창 꺼짐 방지
//}