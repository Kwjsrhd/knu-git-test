#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int getArea();
	int thickness;
	int getSpace();
};

int Rectangle::getArea() {
	return width * height;
}

int Rectangle::getSpace() {
	return width * height * thickness;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	rect.thickness = 4;
	cout << "�簢���� ������ " << rect.getArea() << endl;
	cout << "����ü�� ü���� " << rect.getSpace() << endl;
}