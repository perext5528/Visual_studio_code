//#include <stdio.h>
//
//void main() {
//	//�迭, ���� �ʱ�ȭ
//	int arr[] = { 1, 7, 14, 17, 26, 59, 63, 77, 79, 87, 88, 90 };
//	int lower = 1, higher = 12, m;
//
//	printf("1. ã���� �ϴ� Ű �� : 77\n");	//Ű ���� 77�� ���
//
//	int key1 = 77;	//���� �ʱ�ȭ
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
//		printf("   �ش� Ű ���� ��ġ : arr[%d]\n\n", i1);
//	else
//		printf("   �ش� Ű ���� �������� �ʽ��ϴ�.\n\n");
//
//
//	printf("2. ã���� �ϴ� Ű �� : 15\n");	//Ű ���� 15�� ���
//
//	int key2 = 15;	//���� �ʱ�ȭ
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
//		printf("   �ش� Ű ���� ��ġ : arr[%d]\n\n", i2);
//	else
//		printf("   �ش� Ű ���� �������� �ʽ��ϴ�.\n\n");
//}