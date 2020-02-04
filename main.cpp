#include <iostream>
using namespace std;
void swap_str(char* ap, char* bp);

int main() {
	char A[100], B[100];
	while (true) {
		cout << "처음 문자열 : ";
		cin.getline(A, 100, '\n');
		if (strcmp(A, "")!=0) {
			cout << "두 번째 문자열 : ";
			cin.getline(B, 100, '\n');
			if (strcmp(B, "") != 0) {
				swap_str(A, B);
				cout << "After swapping.." << endl;
				cout << "처음 문자열 : " << A << endl;
				cout << "두 번째 문자열 : " << B << endl;
				cout << "=============================" << endl;
			}
			else {
				cout << "프로그램 종료!" << endl;
				break;
			}
		}
		else {
			cout << "프로그램 종료!" << endl;
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