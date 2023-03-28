#include<stdio.h>
struct student{
	char name[20];
	int roll_no;
	int marks[5];
};
int main(){
	struct student a;
	int i;
	printf("enter the name of the student:");
	scanf("%[^\n]s",a.name);
	printf("enter the roll no. of the student:");
	scanf("%d",&a.roll_no);
	for(i=0;i<5;i++){
		printf("enter marks of the student in subject %d:",i+1);
		scanf("%d",&a.marks[i]);
	}
	printf("\nname of the student is %s",a.name);
	printf("\nroll no. of the student is %d",a.roll_no);
	printf("\nmarks of the student are:");
	for(i=0;i<5;i++){
		printf(" %d",a.marks[i]);
	}
	return 0;
}
