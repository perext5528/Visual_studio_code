//#include <iostream>
//using namespace std;
//
//struct CUSTOMER {
//	char name[10];
//	int age;
//	char sex;
//};
//
//void main() {
//	CUSTOMER customer[10];
//	int num = 0;
//	char menu;
//
//	while (true) {
//		cout << "1. 고객 정보 입력\n";
//		cout << "2. 고객 정보 출력\n";
//		cout << "3. 종료\n";
//		cout << "메뉴 선택 : ";
//		cin >> menu;
//
//		if (menu == '3') {
//			break;
//		}
//
//		switch (menu) {
//		case '1':
//			if (num == 10) {
//				cout << "더 이상 고객 정보를 입력할 수 없습니다.\n";
//				continue;
//			}
//			cout << "고객 이름 : ";
//			cin >> customer[num].name;
//			cout << "나이 : ";
//			cin >> customer[num].age;
//			cout << "성별 (M, F) : ";
//			cin >> customer[num].sex;
//			num++;
//			break;
//		case'2':
//			for (int i = 0; i < num; i++) {
//				cout.width(20);
//				cout.setf(ios_base::left);
//				cout << customer[i].name;
//				cout.width(3);
//				cout<< customer[i].age;
//				cout << customer[i].sex << endl;
//			}
//			break;
//		default:
//			cout << "잘못 입력하셨습니다.\n";
//			continue;
//		}
//	}
//}