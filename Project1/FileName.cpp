#include<iostream>
using namespace std;
class Car
{
public:
	int year;
	int speed;
	string brand;
	string model;
	void displayinfo()
	{
		cout << "year : " << year << endl;
		cout << "speed : " << speed << endl;
		cout << "brand : " << brand << endl;
		cout << "model : " << model << endl;
	}
	void accelerate(double amount)
	{
		speed += amount;
	}
	void brake(double amount)
	{
		if (speed > 0)
		{
			speed -= amount;
		}

	}

};
void main()
{

	Car mycar1;
	mycar1.year = 2022;
	mycar1.speed = 30;
	mycar1.model = "corolla";
	mycar1.brand = "toyota";
	mycar1.displayinfo();
	cout << "-------------------------------" << endl;
	cout << "acceleration become = " << endl;
	mycar1.accelerate(10);
	mycar1.displayinfo();
	cout << "---------------------------------" << endl;
	cout << "brake become = " << endl;
	mycar1.brake(5);
	mycar1.displayinfo();





		
	system("pause");
}