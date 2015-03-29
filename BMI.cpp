#include<iostream>
#include<string>
#include"BMI.h"
using namespace std;


int classBMI::getmass()
{
	return mass;
}
int classBMI::getheight()
{
	return height;
}
void classBMI::setmass(int a)
{
	mass=a;
}
void classBMI::setheight(int b)
{
	height=b;
}
float classBMI::bmi(int height,int mass)
{
	float h,m;
	h=(float)height;
	m=(float)mass;
	return m/((h/100)*(h/100));
}
		
string classBMI::cat(float i)
{
	if(i<15.0)
		return "Very severely underweight";
	else if(i>=15.0&&i<16.0)
		return "Severely underweight";
	else if(i>=16.0&&i<18.5)
		return "Underweight";		
	else if(i>=18.5&&i<25.0)
		return "Normal";
	else if(i>=25.0&&i<30.0)
		return "Overweight";
	else if(i>=30.0&&i<35.0)
		return "Obese Class I (Moderately obese)";
	else if(i>=35.0&&i<40.0)
		return "Obese Class II (Severely obese)";
	else if(i>=40.0)
		return "Obese Class III (Very severely obese)";
}

