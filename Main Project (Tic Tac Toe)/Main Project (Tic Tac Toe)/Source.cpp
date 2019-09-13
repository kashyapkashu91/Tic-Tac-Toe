#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	char a[] = { '1','2','3','4','5','6','7','8','9' };
	int n, flag = 0;
	char p = 'O';

label:
	system("cls");

	cout << "  " << a[0] << "  |  " << a[1] << "  |  " << a[2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << a[3] << "  |  " << a[4] << "  |  " << a[5] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << a[6] << "  |  " << a[7] << "  |  " << a[8] << endl;

	cout << endl << "player " << p << "  turn " << " enter number ";
	system("Color 2");
	cin >> n;
	switch (n) {
	case 1:
		if (a[0] == 'O' || a[0] == 'X') {
			cout << "this is already fill!!" << endl;
			system("Color 1");
			goto label;
		}
		else if (flag == 0) {
			a[0] = 'O';
			p = 'X';
			flag = 1;
		}
		else {
			a[0] = 'X';
			p = 'O';
			flag = 0;
		}
		break;

	case 2:
		if (a[1] == 'O' || a[1] == 'X') {
			cout << "this is already fill!!" << endl;
			system("Color 1");
			goto label;
		}
		else if (flag == 0) {
			a[1] = 'O';
			p = 'X';
			flag = 1;
		}
		else {
			a[1] = 'X';
			p = 'O';
			flag = 0;
		}
		break;
	case 3:
		if (a[2] == 'O' || a[2] == 'X') {
			cout << "this is already fill!!" << endl;
			system("Color 1");
			goto label;
		}
		else if (flag == 0) {
			a[2] = 'O';
			p = 'X';
			flag = 1;
		}
		else {
			a[2] = 'X';
			p = 'O';
			flag = 0;
		}
		break;
	case 4:
		if (a[3] == 'O' || a[3] == 'X') {
			cout << "this is already fill!!" << endl;
			system("Color 1");
			goto label;
		}
		else if (flag == 0) {
			a[3] = 'O';
			p = 'X';
			flag = 1;
		}
		else {
			a[3] = 'X';
			p = 'O';
			flag = 0;
		}
		break;
	case 5:
		if (a[4] == 'O' || a[4] == 'X') {
			cout << "this is already fill!!" << endl;
			system("Color 1");
			goto label;
		}
		else if (flag == 0) {
			a[4] = 'O';
			p = 'X';
			flag = 1;
		}
		else {
			a[4] = 'X';
			p = 'O';
			flag = 0;
		}
		break;
	case 6:
		if (a[5] == 'O' || a[5] == 'X') {
			cout << "this is already fill!!" << endl;
			system("Color 1");
			goto label;
		}
		else if (flag == 0) {
			a[5] = 'O';
			p = 'X';
			flag = 1;
		}
		else {
			a[5] = 'X';
			p = 'O';
			flag = 0;
		}
		break;
	case 7:
		if (a[6] == 'O' || a[6] == 'X') {
			cout << "this is already fill!!" << endl;
			system("Color 1");
			goto label;
		}
		else if (flag == 0) {
			a[6] = 'O';
			p = 'X';
			flag = 1;
		}
		else {
			a[6] = 'X';
			p = 'O';
			flag = 0;
		}
		break;
	case 8:
		if (a[7] == 'O' || a[7] == 'X') {
			cout << "this is already fill!!" << endl;
			system("Color 1");
			goto label;
		}
		else if (flag == 0) {
			a[7] = 'O';
			p = 'X';
			flag = 1;
		}
		else {
			a[7] = 'X';
			p = 'O';
			flag = 0;
		}
		break;
	case 9:
		if (a[8] == 'O' || a[8] == 'X') {
			cout << "this is already fill!!" << endl;
			system("Color 1");
			goto label;
		}
		else if (flag == 0) {
			a[8] = 'O';
			p = 'X';
			flag = 1;
		}
		else {
			a[8] = 'X';
			p = 'O';
			flag = 0;
		}
		break;
	}
	if (a[0] == a[1] && a[1] == a[2]) {
		cout << "---------" << "player " << a[0] << " win" << "---------" << endl;
		goto label1;
	}
	else if (a[3] == a[4] && a[4] == a[5]) {
		cout << "---------" << "player " << a[3] << " win" << "---------" << endl;
		goto label1;
	}
	else if (a[6] == a[7] && a[7] == a[8]) {
		cout << "---------" << "player " << a[6] << " win" << "---------" << endl;
		goto label1;
	}
	else if (a[0] == a[3] && a[3] == a[6]) {
		cout << "---------" << "player " << a[6] << " win" << "---------" << endl;
		goto label1;
	}
	else if (a[1] == a[4] && a[4] == a[7]) {
		cout << "---------" << "player " << a[1] << " win" << "---------" << endl;
		goto label1;
	}
	else if (a[2] == a[5] && a[5] == a[8]) {
		cout << "---------" << "player " << a[2] << " win" << "---------" << endl;
		goto label1;
	}
	else if (a[0] == a[4] && a[4] == a[8]) {
		cout << "---------" << "player " << a[0] << " win" << "---------" << endl;
		goto label1;
	}
	else if (a[2] == a[4] && a[4] == a[6]) {
		cout << "---------" << "player " << a[2] << " win" << "---------" << endl;
		goto label1;
	}
	else if ((a[0] != '1') && (a[1] != '2') && (a[2] != '3') && (a[3] != '4') && (a[4] != '5') && (a[5] != '6') && (a[6] != '7') && (a[7] != '8') && (a[8] != '9'))
	{
		cout << endl << "---------" << "draw" << "---------" << endl;
		system("Color 1");
		goto label1;
	}

	goto label;
label1:
	cout << endl << "  " << a[0] << "  |  " << a[1] << "  |  " << a[2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << a[3] << "  |  " << a[4] << "  |  " << a[5] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << a[6] << "  |  " << a[7] << "  |  " << a[8] << endl;


	return 0;
}
