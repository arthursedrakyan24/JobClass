#include "job.hpp"

//Inputing the variable "Pos" and returning it, that we can give to program output the criterie in future.
string pos(){
	string Pos;
	cout<<"What's position do you want?\nSecurity worker\nReception Administrator\nPR manager\nDirector\nFounder\n";
	getline(cin, Pos);
	assert(Pos=="Security worker" || Pos=="Reception Administrator" || Pos=="PR manager" || Pos=="Director" || Pos=="Founder");
	return Pos;
}

