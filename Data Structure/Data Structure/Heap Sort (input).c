//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void main() {
//	int arr[100] = { 0, };
//	int i, j, k, l;
//	int atemp = 0, btemp = 0, count = 0;
//	int input = 0, subs = 1, sw = 1;	//input : ������ �Է�, subs : �迭 ÷��, sw : while�� ����
//	
//	printf("      Heap Sort\n\n");
//	
//	printf("Please Input Data (EXIT : -1)\n>>>");
//
//	while (sw) {	//������ �Է�
//		scanf("%d", &input);
//
//		if (input == -1)	//-1 �Է� �� while�� ����
//			sw = 0;
//
//		else {	//�迭�� ������ �Է�
//			arr[subs] = input;
//			subs++;
//			printf("Please Input Data (EXIT : -1)\n>>>");
//		}
//	}
//
//	puts("");
//	printf("Default Data : ");	//�Էµ� ������ ���
//	for (k = 1; k < subs; k++) {
//		printf("%d ", arr[k]);
//	}
//	puts("\n");
//
//	for (l = subs - 1; l > 0; l--) {	//�� ����
//		count += 1;	//ȸ��Ƚ�� üũ
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
//		printf("[%d] Turn : ", count);	//ȸ�� ���� �� ������ ���
//		for (k = 1; k < subs; k++)
//			printf("%d ", arr[k]);
//		puts("");
//
//		btemp = arr[1];
//		arr[1] = arr[l];
//		arr[l] = btemp;
//
//		printf("[%d] Swap : ", count);	//��ȯ�� ������ ���
//		for (k = 1; k < subs; k++)
//			printf("%d ", arr[k]);
//		puts("\n");
//
//	}
//
//	printf("Result Data : ");	//��� ������ ���
//	for (k = 1; k < subs; k++)
//		printf("%d ", arr[k]);
//
//	scanf("%d", &subs);	//�ܼ�â ���� ����
//}