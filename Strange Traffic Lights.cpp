#include <iostream>
using namespace std;

int main(){
	int b = 47;
	int num;
	int x, y, z;
	cout << "Choose the color number you want to input" << endl;
	cout << "Red: 80" << endl;
	cout << "Green: 20" << endl;
	cout << "Yellow: 3" << endl;
	cout << "Number: ";
	cin >> num;
	for(int i = 0; i < 4; i++){
		b += 80;
		x += b + 20;
		y += x + 3;
		z += y + 80;
		cout << z << endl;
	}
	
	if(150 < z < 230){
		cout << "The traffic light color is red";
	}
	
	return 0;
}
