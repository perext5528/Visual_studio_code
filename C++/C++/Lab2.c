//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#define DISTANCE 25  //하루 운행 거리
//#define RATIO  11.8 //1리터당 주행 거리
//void main()
//{
//	int oil;
//	double remainder, use; //현재 오일량, 사용량
//	int current = 0;
//	int day, require;  //날짜, 주입 요청일
//
//	do {
//		printf("오일량을 입력하세요(0~500) :");
//		scanf("%d", &oil);
//	} while (0);
//	remainder = oil;
//	use = DISTANCE / RATIO; //_____(2)_____;    //일일 사용량 계산 (
//	printf("=====================================================\n");
//	printf("날짜\t  연료량\t주행거리\t연료 보충\n");
//	printf("=====================================================\n");
//	for (day = 1; day<250; day++)
//	{
//		current = current + DISTANCE;
//		remainder = remainder - use;
//
//		if (day % 3 == 0)//3일마다 한번씩 검사하여 결과 출력
//		{
//			if (remainder >= (3 * use)) // 3일마다 오일 체크
//			{
//				printf("%d\t%8.3f\t%d\t\t안전\n", day, remainder, current);
//				require = day + 3;
//			}
//			else {
//				printf("%d\t%8.3f\t%d\t\t보충\n", day, remainder, current);
//				break;
//			}
//		}
//	}
//	printf("=====================================================\n");
//	printf("다음 주유일자는 %d일 후입니다.\n", require);
//	printf("=====================================================\n");
//}