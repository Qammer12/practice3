#include<stdio.h>

struct heaptree{
	int info;
	struct heaptree*right;
	struct heaptree*left;	
}
heaptree*root;
void insertion(){
	if(root == NULL){
		root= (struct node*)malloc(sizeof(struct node));
		printf("Please enter value: ")
		scanf("%d",&value);
		root->info= value;
		root->left=NULL;
		root->right=NULL;
	}
}
