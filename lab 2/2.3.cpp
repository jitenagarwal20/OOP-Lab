#include<stdio.h>
struct student{
	char name[20];
	int roll_no;
	int marks[3];
	int total_marks;
	int sub1_total;
	int sub2_total;
	int sub3_total;
};
void create(struct student *a,int size){
	int i;
	for(i=0;i<size;i++){
		int j;
		printf("enter the name of the student:");
		fflush(stdin);
		scanf("%[^\n]s",&a[i].name);
		printf("enter the roll no. of the student:");
		scanf("%d",&a[i].roll_no);
		a[i].total_marks=0;
		for(j=0;j<3;j++){
			printf("enter marks of the student in subject %d:",j+1);
			scanf("%d",&a[i].marks[j]);
			a[i].total_marks+=a[i].marks[j];
		}
	}
}
void display(struct student *a,int size){
	int i;
	for(i=0;i<size;i++){
		int j;
		printf("\nname of the student is %s,",a[i].name);
		printf(" roll no. of the student is %d",a[i].roll_no);
		printf(" total marks scored by the student is %d",a[i].total_marks);
	}
}
int total(struct student *a,int size,int no){
	int c=0,i=0;
	for(i;i<size;i++){
		c+=a[i].marks[no];
	}
	return c;
}
void disp_subtotal(struct student *a){
	int i=0;
	printf("\ntotal marks scored by students in subject %d is %d",i+1,a[i].sub1_total);
	printf("\ntotal marks scored by students in subject %d is %d",i+2,a[i].sub2_total);
	printf("\ntotal marks scored by students in subject %d is %d",i+3,a[i].sub3_total);
}
int main(){
	int n,i;
	printf("number of inputs you want to take:");
	scanf("%d",&n);
	struct student school[n];
	create(school,n);
	for(i=0;i<n;i++){
		int j=0;
		school[i].sub1_total=total(school,n,j);
		j++;
		school[i].sub2_total=total(school,n,j);
		j++;
		school[i].sub3_total=total(school,n,j);
	}
	display(school,n);
	disp_subtotal(school);
	return 0;
}
