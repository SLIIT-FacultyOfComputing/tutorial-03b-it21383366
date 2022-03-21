#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
	int r;
	float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout<<setw(5)<<"no"<<setw(15)<<"name"<<setw(10)<<"marks"<<endl;
 
 for(r=0;r<5;r++)
 {
 	cout<<setw(5)<<r+1;
 	cout<<setw(15)<<names[r];
 	cout<<setw(10)<<setprecision(2)<<setiosflags(ios::fixed)<<marks[r]<<endl;
 }
	
	
	return 0;
}