//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#define DISTANCE 25  //�Ϸ� ���� �Ÿ�
//#define RATIO  11.8 //1���ʹ� ���� �Ÿ�
//void main()
//{
//	int oil;
//	double remainder, use; //���� ���Ϸ�, ��뷮
//	int current = 0;
//	int day, require;  //��¥, ���� ��û��
//
//	do {
//		printf("���Ϸ��� �Է��ϼ���(0~500) :");
//		scanf("%d", &oil);
//	} while (0);
//	remainder = oil;
//	use = DISTANCE / RATIO; //_____(2)_____;    //���� ��뷮 ��� (
//	printf("=====================================================\n");
//	printf("��¥\t  ���ᷮ\t����Ÿ�\t���� ����\n");
//	printf("=====================================================\n");
//	for (day = 1; day<250; day++)
//	{
//		current = current + DISTANCE;
//		remainder = remainder - use;
//
//		if (day % 3 == 0)//3�ϸ��� �ѹ��� �˻��Ͽ� ��� ���
//		{
//			if (remainder >= (3 * use)) // 3�ϸ��� ���� üũ
//			{
//				printf("%d\t%8.3f\t%d\t\t����\n", day, remainder, current);
//				require = day + 3;
//			}
//			else {
//				printf("%d\t%8.3f\t%d\t\t����\n", day, remainder, current);
//				break;
//			}
//		}
//	}
//	printf("=====================================================\n");
//	printf("���� �������ڴ� %d�� ���Դϴ�.\n", require);
//	printf("=====================================================\n");
//}