#include <iostream>
using namespace std;


class node{
    public:
    int value;
    node* next;
    
    node(int value){
        this->value=value;
        next=nullptr;
    }
};

class linkedlist{
    private:
    node* head;
    node* tail;
    int length;

    public:
       linkedlist(int value){
          node* newnode = new node(value);
          newnode=head;
          newnode=tail;
          length=1;
    }
    ~linkedlist(){
        node* temp=head;
        while (head){
            head=head->next;
            delete temp;
            temp=head;
        }
    }
    void printll(){
        node* temp=head;
        while(temp != nullptr){
            cout<<temp->value<<endl;
            temp->next;
        }
    }
    void gethead(){
        if (head == nullptr){
            cout<<"Head : nullptr"<<endl;
        }
        else{
            cout<<"Head:"<<head->value<<endl;
        }
    }
    void gettail(){
        if(tail==nullptr){
            cout<<"Tail:nullptr"<<endl;
        }else{
            cout<<"tail"<<tail->value<<endl;
        }
    }
    void getlength(){
        cout<<"Length "<<length<<endl;
    }
};
    int main(){
        linkedlist* myll = new linkedlist(4);
        myll->gethead();
        myll->gettail();
        myll->getlength();

        cout<<"\nlinkedlist:\n";
        myll->printll();
    }