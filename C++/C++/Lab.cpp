#include <iostream>
using namespace std;

void main()
{
	int oil = 100, fuelEff = 12, dailyMile = 30, day = 1, distance = 30, refuel = 0, flag = 1;

	cout << "=====================================================\n";
	printf(" ��¥\t  ���ᷮ      ����Ÿ�    ���� ����\n");
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
				cout << "  " << day << "\t   " << idleFuel << "\t\t" << distance << "\t   ����\n";
			else
				cout << "  " << day << "\t   " << idleFuel << "\t\t" << distance << "\t   ����\n";
		}
	}

	cout << "=====================================================\n";
	cout << "���� �������ڴ� " << refuel << "�� �� �Դϴ�.\n";
	cout << "=====================================================\n";
}
