#include<stdio.h>

void quicksort(int number[25],int down,int up){

int i, j, pivot, temp;

if(down<up){

pivot=down;

i=down;

j=up;

while(i<j){

while(number[i]<=number[pivot]&&i<up)

i++;

while(number[j]>number[pivot])

j--;

if(i<j){

temp=number[i];

number[i]=number[j];

number[j]=temp;

}

}

temp=number[pivot];

number[pivot]=number[j];

number[j]=temp;

quicksort(number,down,j-1);

quicksort(number,j+1,up);

}

}

int main(){

int i, count, number[25];

printf("Enter elements");

scanf("%d",&count);

printf("Enter %d elements: ", count);

for(i=0;i<count;i++)

scanf("%d",&number[i]);

quicksort(number,0,count-1);

printf("The Sorted Order is: ");

for(i=0;i<count;i++)

printf(" %d",number[i]);

return 0;

}
