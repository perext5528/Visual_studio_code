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
//		cout << "1. �� ���� �Է�\n";
//		cout << "2. �� ���� ���\n";
//		cout << "3. ����\n";
//		cout << "�޴� ���� : ";
//		cin >> menu;
//
//		if (menu == '3') {
//			break;
//		}
//
//		switch (menu) {
//		case '1':
//			if (num == 10) {
//				cout << "�� �̻� �� ������ �Է��� �� �����ϴ�.\n";
//				continue;
//			}
//			cout << "�� �̸� : ";
//			cin >> customer[num].name;
//			cout << "���� : ";
//			cin >> customer[num].age;
//			cout << "���� (M, F) : ";
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
//			cout << "�߸� �Է��ϼ̽��ϴ�.\n";
//			continue;
//		}
//	}
//}