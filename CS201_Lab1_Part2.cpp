//Name- David Boatright
//Assignment- Lab 1 Part 2
//Lecture- Tues Thurs 11:30-12:45
//Lab- Wed 7:00-9:30
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	//set up variables used
	string in1, in2, in3, in4;
	int x1, y1, x2, y2;
	float dist1, dist2;
	char choice;
	//get choice from user ‘e’ to enter values or
	//’g’ to generate values using random values
	cout << "How would you like to get the 4 values: ";
	cin >> choice;
	if (choice == 'e') {
		//get input if choice is ‘e’
		cout << "Please enter 4 values: ";
		cin >> x1 >> y1 >> x2 >> y2;
		//cin >> in1 >> in2 >> in3 >> in4;
		//here we will verify input to make sure it is numeric
		//if so, make sure it between -10 and 10 inclusive
		//if not, send error message to the screen &
		//end program
		if (x1 < -10 || x1 > 10) {
			cout << "The first x value is out of bounds";
			return 0;
		}
		if (y1 < -10 || y1 > 10) {
			cout << "The first y value is out of bounds";
			return 0;
		}
		if (x2 < -10 || x2 > 10) {
			cout << "The second x value is out of bounds";
			return 0;
		}
		if (y2 < -10 || y2 > 10) {
			cout << "The second y value is out of bounds";
			return 0;
		}
	}
	else if (choice == 'g') {
		//else if choice is ‘g’
		srand(time(0));
		//generate 4 random numbers between -10 & 10
		x1 = rand() % 21 - 10;
		y1 = rand() % 21 - 10;
		x2 = rand() % 21 - 10;
		y2 = rand() % 21 - 10;
	}
	//endIf
	//print both points
	cout << "Point 1: (" << x1 << ", " << y1 << ")" << endl;
	cout << "Point 2: (" << x2 << ", " << y2 << ")" << endl;
	//calculate dist1 & dist2
	//determine which is closer and print
	dist1 = sqrt(pow(x1, 2) + pow(y1, 2));
	dist2 = sqrt(pow(x2, 2) + pow(y2, 2));
	cout << "Distance to origin of point 1 to the origin: " << dist1 << endl;
	cout << "Distance to origin of point 2 to the origin: " << dist2 << endl;
	if (dist1 < dist2) {
		cout << "The first point is closer to the origin";
	}
	else {
		cout << "The second point is closer to the origin";
	}
}