#include <iostream>
using namespace std;
int main() {
	/*
	//n1
	int hp;
	cin >> hp;
	if (hp <= 0) {
		cout << "false" << endl;
	}
	else {
		cout << "true" << endl;
	}
	*/
	/*
	//2
	int gradus;
	cin >> gradus;
	if (gradus <= 20) {
		cout << "off" << endl;
	}
	else {
		cout << "on" << endl;
	}
	*/
	/*
	//3
	int T, tk, vl;
	cin >> T >> tk >> vl;
	if (tk > T && vl <= 80) {
		cout << "on" << endl;
	}
	else {
		cout << "off" << endl;
	}
	*/
	/*
	//4
	double x, y;
	cin >> x;
	if (x > 0) {
		y = sqrt(x - 2);
	}
	else if (x == 0) {
		y = 0;
	}
	else if (x < 0) {
		y = abs(x);
	}
	cout << y << endl;
	*/
	/*
	//5
	int palec;
	cin >> palec;
	switch (palec) {
	case 1: cout << "bolshoy" << endl; break;
	case 2: cout << "ukazatelnyi" << endl; break;
	case 3: cout << "sredniy" << endl; break;
	case 4: cout << "bezymyannyi" << endl; break;
	case 5: cout << "mizinec" << endl; break;
	default: cout << "error" << endl; break;
	}
	*/
	//6
	int Tkv, Tul;
	cin >> Tkv >> Tul;
	if (Tkv > 20 && Tul > Tkv) {
		cout << "kond on" << endl;
		cout << "window off" << endl;
	}
	else if (Tkv > 20 && Tul << Tkv || Tkv <= 20 && Tul << Tkv) {
		cout << "kond off" << endl;
		cout << "window on" << endl;
	}
	else if (Tkv <= 20 && Tul >> Tkv) {
		cout << "kond off" << endl;
		cout << "window off" << endl;
	}
}