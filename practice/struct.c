#include <stdio.h>
#include <stdlib.h>

struct patient {

	char name[20];
	int age;
	double grade;
};

	int main (void){
	
	struct patient joe;
		joe.age = 40;
		joe.grade =3.0;


	printf("age:%d",joe.age);	
	printf("grade: %f", joe.grade);
	};
