#include <iostream>
using namespace std;
void swap_str(char* ap, char* bp);

int main() {
	char A[100], B[100];
	while (true) {
		cout << "ó�� ���ڿ� : ";
		cin.getline(A, 100, '\n');
		if (strcmp(A, "")!=0) {
			cout << "�� ��° ���ڿ� : ";
			cin.getline(B, 100, '\n');
			if (strcmp(B, "") != 0) {
				swap_str(A, B);
				cout << "After swapping.." << endl;
				cout << "ó�� ���ڿ� : " << A << endl;
				cout << "�� ��° ���ڿ� : " << B << endl;
				cout << "=============================" << endl;
			}
			else {
				cout << "���α׷� ����!" << endl;
				break;
			}
		}
		else {
			cout << "���α׷� ����!" << endl;
			break;
		}
	}
	return 0;
}

void swap_str(char* ap, char* bp) {
	char temp[100];
	strcpy_s(temp, 100, ap);
	strcpy_s(ap, 100, bp);
	strcpy_s(bp, 100, temp);

}