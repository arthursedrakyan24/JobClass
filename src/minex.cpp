#include "job.hpp"

//Inputing the variable "MinEx" and returning it, that we can give to program output the criterie in future.
int minex(){
	int MinEx;
	cout<<"From 0 to 40, what's minimal experience do you want>\n";
	cin>>MinEx;
	assert(MinEx>=0 && MinEx<=40);
	return MinEx;
}
