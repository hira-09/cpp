#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int marks;
	cout<<"Enter your marks: ";
	cin>>marks;
	cout<<"Your marks are "<<marks;
	// if marks are greter than or equal to 40 then pass otherwise fail
	// marks >= 40 -> pass
	// conditional structure / selection structure
	// syntax
	// if(condition) {
		// run, if condition true;
	// }
	// else {
		// execute, if condition false;
	// }
	if(marks >= 40) {
		cout<<"\nCongrats! you're pass.";
	}
	else {
		cout<<"\nAhhhh! better luck next time";
	}
	getch();
	return 0;
}
