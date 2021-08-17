#include "job.hpp" //It's the header-file.

int main(){
	//Declaring 4 arrays with the "CV" class type, each of arrays have the same variables "salary", "position", "experience" and "name". The variable "position" has the same value for the all objects. 
	CV array[5];
	CV array1[5];
	CV array2[5];
	CV array3[5];
	
	Name(array, array1, array2, array3); //In this function we declare the "name" variable for every object.
	Salary(array, array1, array2, array3); //In this function we declare the "salary" variable for every object.
	Position(array, array1, array2, array3); //In this function we declare the "position" variable for every object.
	Experience(array, array1, array2, array3); //In this function we declare the "experience" variable for every object.

	string Pos=pos(); //Declaring the variable Pos, which inputs the user in pos() function.
	int MinEx=minex(), MaxSal=maxsal(); //Declaring the variable MinEx and MaxSal, which inputs user in minex() and maxsal() functions.

	cout<<"There are our employers, with your criteries.\n";
	Print(array, array1, array2, array3, Pos, MinEx, MaxSal); //Printing appropriate "name" variables.
}
