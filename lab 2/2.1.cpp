#include<stdio.h>
struct address{
	char city[20];
	int pin_no;
	long int phn_no;
};
struct employee{
	struct address details;
};
void display(struct employee e){
	printf("\ncity where the employee lives %s",e.details.city);
	printf("\nphone no. of the employee is %li",e.details.phn_no);
	printf(" pin no. of the employee is %d",e.details.pin_no);
}
int main(){
	struct employee e1;
	printf("enter the city name of the employee:");
	scanf("%[^\n]s",&e1.details.city);
	printf("enter the pin no. of the employee:");
	scanf("%d",&e1.details.pin_no);
	printf("enter the phone no. of the employee:");
	scanf("%li",&e1.details.phn_no);
	printf("\ndetails of the employee are:");
	display(e1);
	return 0;
}
