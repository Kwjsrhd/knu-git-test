#include <iostream>
using namespace std;

class Tower {
public:
	int height;
	Tower();
	Tower(int a);
	double getHeight();
};

Tower::Tower() {
	height = 1;
}

Tower::Tower(int a) {
	height = a;
}

double Tower::getHeight() {
	return height;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}