#include<iostream>
#include<string>
using namespace std;

struct student{
	int rollnumber;
	string name;
};

int main()
{
	int x=4; 
	
	student s1;
	student s2;
	
	s1.name="Bonds";
	s1.rollnumber=67;
	
	s2.name="Mujri";
	s2.rollnumber=68;
	
	cout<<s1.name;
	
	return 0;
	
}

