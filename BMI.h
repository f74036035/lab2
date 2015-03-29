#include<iostream>
#include<string>
#ifndef BMI_H
#define BMI_H
using namespace std;

class classBMI{
	public:
		int getmass();
		int getheight();
		void setmass(int a);
		void setheight(int b);
		float bmi(int height,int mass);
		string cat(float i);
	private:
		int mass;
		int height;
};

#endif
