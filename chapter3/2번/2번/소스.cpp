#include <iostream>
using namespace std;

class Date {
public:
	int x;
	int y;
	int z;
	Date();
	Date(int a, int b, int c);
	int getYear;
	int getMonth;
	int getDay;
};

Date::Date() {

}

Date::Date(int a, int b, int c) {
	x = a;
	y = b;
	z = c;
}

int Date::getYear() {
	return x;
}

int Date::getMonth() {
	return y;
}

int Date::getDay() {
	return z;
}

int main() {
	Date birth(2013, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ', ' << birth.getMonth() << ', ' << birth.getDay() << endl;
}