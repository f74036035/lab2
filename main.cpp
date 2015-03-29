#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include"BMI.h"


using namespace std;

int main()
{
	int lheight,lmass;
	classBMI BMI;
	float ans;
	
	ifstream in("file.in",ios::in);
	if(!in)
	{
		cerr<<"file could not be opened"<<endl;
		return -1;
	}
	
	ofstream out("file.out",ios::out);
	while(in>>lheight>>lmass)
	{
		BMI.setheight(lheight);
		BMI.setmass(lmass);
		
		//cout<<BMI.getheight()<<" "<<BMI.getmass()<<endl;
		ans=BMI.bmi(BMI.getheight(),BMI.getmass());
		if(BMI.getheight()==0&&BMI.getmass()==0)
			break;
		out<<setprecision(4)<<left<<setw(6)<<ans<<" "<<BMI.cat(ans)<<"\n";

	}
	return 0;
}
