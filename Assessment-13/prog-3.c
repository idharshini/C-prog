#include <stdio.h>
#include <stdlib.h>
struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};
struct student *head=NULL;
void create_sample_list() {
    int i;
    struct student *temp,*newnode;
    for (i=1;i<=5;i++){
        newnode=(struct student *)malloc(sizeof(struct student));
        newnode->id=i;
        newnode->Maths=50 + i;
        newnode->Science=60 + i;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }else{
            temp->next=newnode;
            temp=newnode;
        }
    }
}
void insert_entry(){
    int ref_id, choice;
    struct student *temp=head,*prev=NULL,*newnode;
    printf("Enter reference ID: ");
    scanf("%d",&ref_id);
    printf("1.Insert Before\n2.Insert After\nChoice: ");
    scanf("%d",&choice);
    newnode=(struct student *)malloc(sizeof(struct student));
    printf("Enter new ID, Maths, Science: ");
    scanf("%d %d %d", &newnode->id, &newnode->Maths, &newnode->Science);
    newnode->next=NULL;
    while(temp!=NULL && temp->id!=ref_id){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("ID not found\n");
        free(newnode);
        return;
    }
    if(choice==1){   
        if (prev==NULL) {
            newnode->next=head;
            head=newnode;
        }else{
            prev->next=newnode;
            newnode->next=temp;
        }
    }else if(choice==2){  
        newnode->next=temp->next;
        temp->next=newnode;
    }else{
        printf("Invalid choice\n");
        free(newnode);
    }
}
void display_list(){
    struct student *temp=head;
    if (temp==NULL) {
        printf("List is empty\n");
        return;
    }
    while (temp!=NULL) {
        printf("ID:%d Maths:%d Science:%d\n",
               temp->id, temp->Maths, temp->Science);
        temp=temp->next;
    }
}
void delete_record(){
    int del_id;
    struct student *temp=head,*prev=NULL;
    if(head== NULL){
        printf("List is empty\n");
        return;
    }
    printf("Enter ID to delete: ");
    scanf("%d",&del_id);
    if(head->id==del_id) {
        temp=head;
        head=head->next;
        free(temp);
        printf("Entry deleted\n");
        return;
    }
    while(temp!=NULL && temp->id!=del_id){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("ID not found\n");
        return;
    }
    prev->next=temp->next;
    free(temp);
    printf("Entry deleted\n");
}
int main(){
    int choice;
    create_sample_list();
   while(1){
    printf("\nMenu\n1.Insert Entry\n2.Delete Record\n3.Display List\n4.Exit\nChoice: ");
    if(scanf("%d", &choice) != 1){
        printf("Invalid input,Enter a number.\n");
        while(getchar()!='\n');
        continue;
    }
    switch(choice){
        case 1:
            insert_entry();
            break;
        case 2:
            delete_record();
            break;
        case 3:
            display_list();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
    }
}
}
