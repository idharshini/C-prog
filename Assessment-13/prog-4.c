#include <stdio.h>
#include <stdlib.h>
struct student {
    struct student *prev;
    int id;
    int Maths;
    int Science;
    struct student *next;
};
struct student *head=NULL;
void create_sample_list(){
    struct student *temp = NULL, *newnode;
    for (int i=1;i<=5;i++){
        newnode=(struct student *)malloc(sizeof(struct student));
        newnode->id=i;
        newnode->Maths=50+i;
        newnode->Science=60+i;
        newnode->next=NULL;
        newnode->prev=temp;
        if(head==NULL)
            head=newnode;
        else
            temp->next=newnode;
        temp=newnode;
    }
}
void display_list(){
    struct student *temp=head;
    if (!temp){
        printf("List is empty\n");
        return;
    }
    while(temp){
        printf("ID:%d Maths:%d Science:%d\n",
               temp->id, temp->Maths, temp->Science);
        temp=temp->next;
    }
}
void insert_entry(){
    int ref_id, choice;
    struct student *temp=head;
    printf("Enter reference ID: ");
    scanf("%d",&ref_id);
    while(temp && temp->id!=ref_id)
        temp=temp->next;
    if(!temp){
        printf("ID not found\n");
        return;
    }
    struct student *newnode=(struct student *)malloc(sizeof(struct student));
    printf("Enter new ID,Maths,Science: ");
    scanf("%d %d %d",&newnode->id,&newnode->Maths,&newnode->Science);
    printf("1.Insert Before\n2.Insert After\nChoice: ");
    scanf("%d",&choice);
    if(choice==1){ 
        newnode->prev=temp->prev;
        newnode->next=temp;
        if(temp->prev)
            temp->prev->next=newnode;
        else
            head=newnode;
        temp->prev=newnode;
    }
    else if(choice==2){
        newnode->next=temp->next;
        newnode->prev=temp;
        if (temp->next)
            temp->next->prev=newnode;
        temp->next=newnode;
    }
    else{
        printf("Invalid choice\n");
        free(newnode);
    }
}
void delete_entry(){
    int del_id;
    struct student *temp=head;
    printf("Enter ID to delete: ");
    scanf("%d",&del_id);
    while(temp && temp->id!=del_id)
        temp=temp->next;
    if(!temp){
        printf("ID not found\n");
        return;
    }
    if(temp->prev)
        temp->prev->next=temp->next;
    else
        head=temp->next;
    if (temp->next)
        temp->next->prev=temp->prev;
    free(temp);
    printf("Entry deleted\n");
}
int main(){
    int choice;
    create_sample_list();
    while(1){
        printf("\nMenu\n");
        printf("1.Insert Entry\n");
        printf("2.Delete Entry\n");
        printf("3.Display List\n");
        printf("4.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: 
                insert_entry(); 
                break;
            case 2: 
                delete_entry(); 
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
