#include <stdio.h>
#include <stdlib.h>
struct student{
    int id;
    int Maths;
    int Science;
    struct student *next;
};
int main(){
    struct student *head=NULL,*temp=NULL,*newnode;
    int id,maths,science;
    while(1){
        printf("Enter Id(-1) to stop:");
        scanf("%d",&id);
        if(id==-1)
        break;
        printf("Enter Maths Mark: ");
        scanf("%d",&maths);
        printf("Enter Science Mark: ");
        scanf("%d",&science);
        newnode=(struct student *)malloc(sizeof(struct student));
        newnode->id=id;
        newnode->Maths=maths;
        newnode->Science=science;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    temp=head;
    while(temp!=NULL){
        printf("ID: %d,Maths: %d,Science:%d\n",
        temp->id,temp->Maths,temp->Science);
        temp=temp->next;
    }
}