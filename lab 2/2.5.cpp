#include<stdio.h>
struct person{
	int age;
	float weight;
};
void create(struct person *a,int size){
	int i;
	for(i=0;i<size;i++){
		printf("enter the age of the person:");
		scanf("%d",&a[i].age);
		printf("enter the weight of the person:");
		scanf("%f",&a[i].weight);
	}
}
void display(struct person *a,int size){
	int i;
	for(i=0;i<size;i++){
		printf("\nage of the person is %d",a[i].age);
		printf(",weight of the person is %.2f",a[i].weight);
	}
}
int main(){
	int n;
	printf("enter number of inputs you want to gather:");
	scanf("%d",&n);
	struct person society[n];
	create(society,n);
	struct person *pointer=society;
	display(pointer,n);
	return 0;
}
