#include <stdio.h>
#include <stdlib.h>


//MY STRUCT HERE
typedef struct address{
	int number; 
	char* streetName;
	char* city;
	int zipCode;
} location ;

int main(){

	location myHome;
	myHome.number = 123;
	myHome.streetName = "Main Street";
	myHome.city = "EHT";
	myHome.zipCode = 5395907;
	printf("here is where i live: %d %s %s %d\n", myHome.number, myHome.streetName, myHome.city, myHome.zipCode);	
	return 0;
}
