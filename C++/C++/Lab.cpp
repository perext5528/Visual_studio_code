#include <iostream>
using namespace std;

void main()
{
	int oil = 100, fuelEff = 12, dailyMile = 30, day = 1, distance = 30, refuel = 0, flag = 1;

	cout << "=====================================================\n";
	printf(" 날짜\t  연료량      주행거리    연료 보충\n");
	cout << "=====================================================\n";
	double idleFuel = oil - (dailyMile / (double)fuelEff);

	while (idleFuel > 0.0) {
		idleFuel -= (dailyMile / (double)fuelEff);
		day++;
		distance += 30;
		if (flag == 1 && idleFuel <= 20.0) {
			refuel = day;
			flag = 0;
		}
		if (day % 3 == 0) {
			if (idleFuel > 20.0)
				cout << "  " << day << "\t   " << idleFuel << "\t\t" << distance << "\t   안전\n";
			else
				cout << "  " << day << "\t   " << idleFuel << "\t\t" << distance << "\t   보충\n";
		}
	}

	cout << "=====================================================\n";
	cout << "다음 주유일자는 " << refuel << "일 뒤 입니다.\n";
	cout << "=====================================================\n";
}
