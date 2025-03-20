#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
	double getArea2();
	int innerRadius;
	int outerRadius;
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

double Circle::getArea2() {
	return 3.14 * outerRadius * outerRadius - 3.14 * innerRadius * innerRadius;
}

int main()
{
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;

	Circle donut_two;
	donut_two.innerRadius = 10;
	donut_two.outerRadius = 20;
	area = donut_two.getArea2();
	cout << "donut_two ������ " << area << endl;
}