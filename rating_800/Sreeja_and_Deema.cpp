// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
//     int n; cin>>n;
//     vector<int> store(n);

//     for(int i=0; i<n; i++){
//         cin>>store.at(i);
//     }

//     int player1=0, player2=0;
//    while(!store.empty()){

//     if(store.at(0)>store.at(store.size()-1)) {
//         player1+=store.at(0);
//         store.erase(store.begin());
//     }
//     else{
//         player1+=store.at(store.size()-1);
//         store.erase(store.end()-1);
//     }

//     if(!store.empty()){

//     if(store.at(0)>store.at(store.size()-1)) {
//         player2+=store.at(0);
//         store.erase(store.begin());
//     }
//     else{
//         player2+=store.at(store.size()-1);
//         store.erase(store.end()-1);
//     }  

//    }}

//    cout<<player1<< " "<<player2;
// }

#include<bits/stdc++.h>
using namespace std; 

struct node{
    int data; 
    struct node* next; 
};

void push(int data , node** head,node** temp){
    node* newnode=new node();
    newnode->next = NULL;
    newnode->data = data;

    if(*head == NULL)
    *head = *temp = newnode;

    else{
        (*temp)->next = newnode;
        *temp = newnode; 
    }
}

void pop(node** head, node** nodee,node**temp){
    if (*head==NULL) return;
    if(*nodee == *head){
        node* tempp = *head; 
        *head = (*head)->next; 
        delete tempp;
    }
    else{
        node* tempp = *head; 
        while(tempp->next != *nodee){
            tempp=tempp->next; 
        }
        node* temmp = *temp;
        *temp = tempp;
        delete tempp;

    }



}

int main(){
  node   *head=NULL , *temp; 
  int t; cin>>t; 
  int ref; 

  for(int i=0; i<t; i++){
    cin>>ref; 
    push(ref,&head,&temp);
  }
 
  int pl1=0, pl2=0;

  while(!(head == NULL || temp==NULL)){
    if(head->data>temp->data){
        pl1+=head->data;
        pop(&head,&head,&temp);
    }
    else{
        pl1+=temp->data;
        pop(&head,&temp,&temp);
    }
    if(head!=NULL && temp!=NULL){
    if(head->data>temp->data){
        pl2+=head->data;
        pop(&head,&head,&temp);
    }
    else{
        pl2+=temp->data;
        pop(&head,&temp,&temp);
    }}
  }

 cout<<pl1<< ' '<<pl2;


}