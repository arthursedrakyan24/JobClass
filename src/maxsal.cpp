#include "job.hpp"

//Inputing the variable "MaxSal" and returning it, that we can give to program output the criterie in future.
int maxsal(){
	int MaxSal;
	cout<<"From 100000, what's maximum salary do you want?\n";
	cin>>MaxSal;
	assert(MaxSal>=100000);
	return MaxSal;
}
