#include <stdio.h>

struct person{
	int age;
	float grade;
};

int main(){
	struct person Justin;
	Justin.age = 34;
	Justin.grade = 1.1;
	return 0;
}
