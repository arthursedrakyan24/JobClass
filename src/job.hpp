#include <iostream>
#include <cassert> //It's the library for using "assert" function.

using namespace std;

class CV {
	public:
		string name;
		int salary;
		string position;
		int experience;
};

//The functions "Name", "Salary", "Position", "Experience" are using all the CV type objects and changing their variables.
void Name(CV*, CV*, CV*, CV*);
void Salary(CV*, CV*, CV*, CV*);
void Position(CV*, CV*, CV*, CV*);
void Experience(CV*, CV*, CV*, CV*);
string pos();
int minex();
int maxsal();
void Print(CV*, CV*, CV*, CV*, string, int, int);//In this function actions have been using the all the CV type objects and variables, which have been declared in the "main" function.
