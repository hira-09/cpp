#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int physics, chem, eng, maths, islamiat, urdu ,computer;
	float total = 0.00, average = 0.00, percentage = 0.00;
    char grade;
	cout<<"Enter physics marks: ";
	cin>>physics;
	cout<<"Enter chem marks: ";
	cin>>chem;
		cout<<"Enter urdu marks: ";
	cin>>urdu;
	cout<<"Enter computer marks: ";
	cin>>computer;
	cout<<"Enter eng marks: ";
	cin>>eng;
	cout<<"Enter maths marks: ";
	cin>>maths;
	cout<<"Enter islamiat marks: ";
	cin>>islamiat;
	total=	physics+ chem +eng- maths+ islamiat+ computer+ urdu;
	cout<< "your total marks are: "<< total;
	average= total/7;
	cout<< "\n your marks average is: "<< average;
	percentage=(total/550)*100;
	cout<< "\n your marks percentage is: "<< percentage;
	
	if (percentage >= 40) {
		if (percentage>=70)
			cout<<"\n\t Grade A";
		else if (percentage>=60 && percentage<70)
			cout<<"\n\t Grade B";
	    else if (percentage>=50 && percentage<60)
			cout<<"\n\t Grade C";
		else if (percentage>=40 && percentage<50)
			cout<<"\n\t Grade D";
	}
	else {
		cout<<"\n\t Better luck next time";
	}
	
//	int no = 30;
//	int rem;
//	if(no%2 == 0) {
//		rem = 0;
//	}
//	else{
//		rem = 1;
//	}
//	
//	// tinary operator
//	// (condition) ? true : false;
//	rem = (no%2 == 0) ? 0: 1;
	
	return 0;
}
