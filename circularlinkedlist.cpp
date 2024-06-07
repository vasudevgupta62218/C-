                                                // Circular Linked List
#include<iostream>
using namespace std;
class Node{
    public:
    Node* next;
    int value;

    Node(int data){
        value=data;
        next=NULL;
    }
};

class CircularLinkedList{
    public:
    Node* head;
    CircularLinkedList(){
        head=NULL;
    }

// Inseriton at beginning

    void insertatbegin(int data){
        Node* new_node=new Node(data);

        if(head==NULL){
            head=new_node;
            new_node->next=head;
            return;
        }

        Node* tail=head;
        while(tail->next!=head){
              tail=tail->next;
        }//tail node will be pointing to the last node.
        tail->next=new_node;
        new_node->next=head;
        head=new_node;
        return;
    }

// Insertion at end

    void insertatend(int data){
        Node* new_node=new Node(data);
        if(head==NULL){
            head=new_node;
            new_node->next=head;
            return;
        }
        Node* tail=head;
        Node* temp=head;
         while(tail->next!=head){
            tail=tail->next;
         }//tail node will be pointing to the last node.
         tail->next=new_node;
         new_node->next=head;
         return;

    }

//Add a Node at an arbitrary position

    void insertarbitrary(int postion,int data){
        Node* new_node=new Node(data);
        Node* temp=head;
        for(int i=0;i<postion-1-1;i++){
            temp=temp->next;
        }
        new_node->next=temp->next;
        temp->next=new_node;
        return;

    }

// Deletion of Node at beginning

    void deleteatbegin(){

        if(head==NULL){
            return;
        }
        Node* delnode=head;
        Node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        head=head->next;
        tail->next=head;
        free(delnode);
        return;
    }

// Deletion of Node at end

    void deleteatend(){

        if(head==NULL){
            return;
        }
        Node* delnode=head;
        Node* temp=head;
        while(temp->next->next!=head){
            temp=temp->next;
        }
        delnode=temp->next;
        temp->next=head;
        free(delnode);
        return;
    }

//// Deletion of Node arbitrary

    void deletearbitrary(int k){
        Node* delnode=head;
        Node* temp=head;
        for(int i=0;i<k-1-1;i++){
            temp=temp->next;
        }
        delnode=temp->next;
        temp->next=temp->next->next;
        free(delnode);
        return;
    }

    void display(){
        Node* temp=head;
        do
        {
            cout<<temp->value<<"->";
            temp=temp->next;
        } while (temp!=head);
        cout<<endl;
    }

    void printCircular(){
        Node* temp=head;
        for(int i=0;i<15;i++){
            cout<<temp->value<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
};


int main(){
    CircularLinkedList cll;
    cll.insertatbegin(3);
    cll.insertatbegin(2);
    cll.insertatbegin(1);
    cll.insertatend(4);
    cll.insertatend(5);

    cll.display();

    cll.insertarbitrary(3,8);
    cll.display();

    cll.deleteatbegin();
    cll.display();

    cll.deleteatend();
    cll.display();

    cll.deletearbitrary(3);
    cll.display();
    
    //cll.printCircular();

    return 0;
}


                    