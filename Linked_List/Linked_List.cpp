#include <iostream>

using namespace std;

//list simplement chainnée
struct Node{
    int data;
    struct Node *next;

}*first=NULL;



void create(int A[],int n){
    struct Node *t;
    struct Node *last;
    first = new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;



    for(int i=1; i<n;i++ ){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }





}


//just display the data of the Node
void Display_Data(struct Node *p){
    cout<<"data : "<<p->data<<endl;
}

//Display all list
void Display_List(struct Node *p){

    while(p!=NULL){ //while(!p)
        cout<<"data : "<<p->data<<endl;
        p=p->next;

    }
}




int main (){
    struct Node *temp;
    int A[]= {1,25,5,4,8,6,3,4};
    create(A,8);
    Display_List(first);



    return 0;
}

//g++ -std=c++17 -o Linked_List Linked_List.cpp
