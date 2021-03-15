#include<cmath>
#include<iostream>

using namespace std;

double hypoten(double first_side, double second_side){
	// this variable stores the sum of x^2 + y^2
	double sum;
	sum = first_side * first_side + second_side * second_side;
	return sqrt(sum);
}

int main(){
	double x,y;

	cout << "Please enter the length of first side: " ;
	cin >> x;
	cout << "Please enter the length of second side: " ;
	cin >> y;
	cout << "Hypotenuse of a 3 by 4 right triangle is "<< hypoten(x,y) << endl;
}
