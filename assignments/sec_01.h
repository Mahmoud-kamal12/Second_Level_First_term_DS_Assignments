#pragma once
#include <algorithm>
#include<iostream>
#include<string>
using namespace std;

// Exercise 1 

class rectangle
{
private:
	int width, height;

public:

	void initialize(int width, int height)
	{
		this->width = width;
		this->height = height;
	}

	int area()
	{
		return this->width * this->height ;
	}
};

// the main function for Exercise 1 

//int main()
//{
//	rectangle r1, r2;
//
//	r1.initialize(4, 5);
//	r2.initialize(10,5);
//	cout << "Area of R1 = " << r1.area() << endl;
//	cout << "Area of R2 = " << r2.area() << endl;
//}


// Exercise 2

class Car
{
private:
	int year, speed;
	string make;
public:

	Car() :year(1990), make("KIA"), speed(10) {};

	Car(int year, string make) :speed(0), year(year), make(make) {};

	int accelerate()
	{
		return (this->speed = this->speed + 5);
	}

	int brake()
	{
		return (this->speed = this->speed - 5);
	}
};

// the main function for Exercise 2

//int main()
//{
//	Car c;
//	cout << "\t\t\t accelerate" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "speed = " << c.accelerate() << endl;
//	}
//	cout << "\t\t\t brake" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "speed = " << c.brake() << endl;
//	}
//}


// Exercise 3

class student
{
private:
	string name;
	int ID;
	int degrees[3];
	int total_degrees;

public:
	void compute_total_degrees()
	{
		for (int i = 0; i < 3; i++)
		{
			total_degrees += this->degrees[i];
		}
	}

	void display() 
	{
		cout << "Name is " << this->name << " and total degrees = " << this->total_degrees << endl;
	
	}

	student(string name , int id , int degrees[]):name(name) , ID(id) , total_degrees(0)
	{
		int size = sizeof(this->degrees) / sizeof(this->degrees[0]); // To find the size.

		for (int i = 0; i < size; i++)
		{
			this->degrees[i] = degrees[i];
		}

		compute_total_degrees();
	}


};

// the main function for Exercise 3

//int main()
//{
//	string name;
//	int id;
//	int degrees[3];
//
//	cout << "Enter your name : ";	cin >> name;
//	cout << "Enter your ID : ";	cin >> id;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "Enter your degree number " << i + 1 << " : ";	cin >> degrees[i];
//	}
//
//
//	student s(name, id, degrees);
//	s.display();
//
//}
