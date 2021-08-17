#include "job.hpp"

//IF the object appropriates our criteries, we output it.
void Print(CV* array, CV* array1, CV* array2, CV* array3, string Pos, int MinEx, int MaxSal){
	
	for(int i=0; i<=4; i++){
		if(MinEx<=array[i].experience && MaxSal>=array[i].salary && Pos==array[i].position){
			cout<<array[i].name<<endl;
		}
		if(MinEx<=array1[i].experience && MaxSal>=array1[i].salary && Pos==array1[i].position){
			cout<<array1[i].name<<endl;
		}
		if(MinEx<=array2[i].experience && MaxSal>=array2[i].salary && Pos==array2[i].position){
			cout<<array2[i].name<<endl;
		}
		if(MinEx<=array3[i].experience && MaxSal>=array3[i].salary && Pos==array3[i].position){
			cout<<array3[i].name<<endl;
		}

	}	
}
