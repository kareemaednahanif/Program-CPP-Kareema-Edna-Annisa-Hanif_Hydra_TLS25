#include <iostream>
#include <vector>
#include <string>
using namespace std;

//the function for an addition iteration with sequence 80, 20, 3, and back to 80 
//the traffic light sequence after 47 seconds (yellow) = red (80 seconds), green (3 seconds), and yellow (20 seconds)
void loopingAddition(int firstNum, int lastLimit){
	vector<int> additionOrder = {80, 20, 3}; 
	vector<string> trafficColor = {"red", "green", "yellow"};
	int currentNum = firstNum;
	int step = 0; //to track the position in the sequence (0, 1, 2) 
	
	cout << "The addition starts from: " << firstNum << endl;
	cout << "The addition upper limit: " << lastLimit << endl;
	
	while(true){
		int additionValue = additionOrder[step % additionOrder.size()];
		string additionColor = trafficColor[step % trafficColor.size()];
		
		//if the total seconds greater than the limit, it stops the loop
		if(currentNum + additionValue > lastLimit){
			break;
		}
		cout << currentNum << " + " << additionValue << " = ";
		currentNum += additionValue;
		cout << currentNum << ", the light color: " << additionColor << endl;
		
		step++;
	}
}

int main(){
	int lowerLimit = 47; //it starts from 47th second (yellow)
	int upperLimit;
	cout << "Enter a number as an upper limit: ";
	cin >> upperLimit; //set the upper limit
	loopingAddition(lowerLimit, upperLimit);
	
	return 0;
}
