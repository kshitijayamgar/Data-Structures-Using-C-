/*correct approach of LinkList*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct movie{

          char mname[20];
          float imdb;
          struct movie *next;
}mov;

struct  movie *head=NULL; //global head
void addnode(){
   struct movie *newnode = (struct movie*)malloc(sizeof(struct movie));
        printf("enter movie name:\n");
        fgets(newnode->mname,15,stdin);
        printf("enter ratings:\n");
        scanf("%f",&(newnode->imdb));
        getchar();
        newnode->next = NULL;
   if(head==NULL){     //1st node
           head = newnode;
    }
   else{                //add last
           mov *temp =head;
         while(temp->next!=NULL){

                 temp = temp->next;
            }
         temp->next=newnode;
    }
  }
void printLL(){
         mov *temp=head;
         printf("*LinkList for entered data*\n ");
        while(temp!=NULL){

temp->mname[strlen(temp->mname)-1]='\0';
                printf(" |%s=",temp->mname);
                printf("%f|->",temp->imdb);
                temp=temp->next;
                }
        // printf("\n");
         printf("|NULL|");
         printf("\n");
        }

void main(){
        printf("enter  4 records\n");
        addnode();
        addnode();
        addnode();
        addnode();
        printLL();
}


