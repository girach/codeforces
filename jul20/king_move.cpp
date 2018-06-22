#include<iostream>
using namespace std;

int abs(int a) {
	return (a>=0)?a:-1*a;
}
int main() {

	string s,t;
	cin >>s;
	cin >>t;

	int horiz, vert, moves, offset;
	horiz = (int)t[0] - (int)s[0];
	vert = (int)t[1] - (int)s[1];
	offset = abs(horiz)<abs(vert)?abs(horiz):abs(vert);
	moves+=offset;
	moves+=(abs(horiz) + abs(vert) - 2*offset);
	cout << moves << endl;
	bool up = true, right = true;
	if (vert<0) up = false;
	if (horiz<0) right = false; 
	for (int i=0;i<offset;i++) {
		if (up && right) cout << "RU" << endl;
		else if (up && !right) cout << "LU" << endl;
		else if (!up && right) cout << "RD" << endl;
		else cout << "LD" << endl;
	}
	if (offset == abs(horiz)) {
		vert = abs(vert)-offset;
		for (int i=0;i<vert;i++) {
			if (up) cout << "U" << endl;
			else cout << "D" << endl;
		}
	}
	else {
		horiz = abs(horiz)-offset;
		for (int i=0;i<horiz;i++) {
			if (right) cout << "R" << endl;
			else cout << "L" << endl;
		}

	}
return 0;
}