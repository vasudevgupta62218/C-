                                               //Doubly Linked list
//Insertion at beginning

#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:

    int value;
    Node* next;
    Node* prev;

    Node(int data){
        value=data;
        prev=NULL;
        next=NULL;
    }
};

class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }

    void insertatbegin(int data){

        Node* new_node=new Node(data);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }

        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return;
    }
    //Insertion at end
    void insertatend(int data){
         Node* new_node=new Node(data);
         if(head==NULL) {    //we can write tail also)
            head=new_node;
            tail=new_node;
            return;
         }
         tail->next=new_node;
         new_node->prev=tail;
         tail=new_node;
         return;
    }

    //Insertion at arbitrary position
    void insertatarbitrary(int data,int k){
        Node* new_node=new Node(data);
        Node* temp=head;
        for(int i=0;i<k-1-1;i++){
            temp=temp->next;
        }
        new_node->next=temp->next;
        temp->next->prev=new_node;
        temp->next=new_node;
        new_node->prev=temp;
        return;
    }

                                                  //Deletion of Node
//  Deletion of node at begin
    void deletenodeatbegin(){

        if(head==NULL){
            return;
        }
        Node* delnode=head;
        head=head->next;

        if(head==NULL){
            tail=NULL;
        }
        else{
            head->prev=NULL;
        }
        free(delnode);
        return;
    }

    //Delete the node at the end
    void deletenodeatend(){
        if(head==NULL){
            return;
        }
        Node* delnode=tail;
        tail=tail->prev;
        if(tail==NULL){
            head=NULL;
        }
        else{
            tail->next=NULL;
        }
        free(delnode);
        return;
    }

    //Delete the node arbitrary
    void deletearbitrary(int k){
        Node* temp=head;
        for(int i=0;i<k-1-1;i++){
            temp=temp->next;
        }
        cout<<temp->value<<endl;
        Node* dltnode=temp->next;
        temp->next=temp->next->next;
        temp->next->next->prev=temp;

        free(dltnode);
        return;
    }
                                          //Reverse Doubly Linked List
//Reverse Linked List
    void reverse_dll(){
        Node* current_pointer=head;
        while(current_pointer){
            Node* next_pointer=current_pointer->next;
            current_pointer->next=current_pointer->prev;
            current_pointer->prev=next_pointer;
            current_pointer=next_pointer;
        }
        Node* newHead=tail;
        tail=head;
        head=newHead;
        return;
    }
                                                        //Palindrome
// Check if the Linked List is palindrome or not.
    bool palindrome(){
        Node* start_pointer=head;
        Node* end_pointer=tail;
        while(start_pointer!=end_pointer){
            if(start_pointer->value==end_pointer->value){
                start_pointer=start_pointer->next;
                end_pointer=end_pointer->prev;
            }
            else{
                return false;
            }
        }
        return true;
    }

    void display_node(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->value<<"<->";
            temp=temp->next;
        }
        cout<<endl;
    }
};

//A critical point in a linked list is defined as the local maximum or local minimum.Given a linked list, return the array of length 2
//containing [minDistance , maxDistance] between any 2 distinct critical points.
//Note that a node can be local max or min only if there exist both previous node and next node.

bool isCriticalPoint(Node* &curr_node){
    if(curr_node->prev->value<curr_node->value  && curr_node->next->value<curr_node->value){   //Local Maxima
        return true;
    }
    if(curr_node->prev->value>curr_node->value  && curr_node->next->value>curr_node->value){   //Local Minima
        return true;
    }
    return false;
}


vector<int>DistanceBetweenCriticalPoints(Node* head,Node* tail){
    vector<int>ans(2,INT32_MAX);
    int firstCP=-1,lastCP=-1;

    Node* curr_node=tail->prev;
    if(curr_node==NULL){
        ans[0]=ans[1]=-1;
        return ans;
    }
    int curr_position=0;
    while(curr_node->prev!=NULL){
        if(isCriticalPoint(curr_node)){
            if(firstCP==-1){
                firstCP=lastCP=curr_position;
            }
            else{
                ans[0]=min(ans[0],curr_position-lastCP);//min distance
                ans[1]=curr_position-firstCP;//max distance
                lastCP=curr_position;
            }
        }
        curr_position++;
        curr_node=curr_node->prev;
    }

    if(ans[0]==INT32_MAX){
        ans[0]=ans[1]=-1;
    }
    return ans;
}
int main(){
    DoublyLinkedList dll;
    
    //dll.insertatbegin(1);
    //dll.insertatbegin(2);
    //dll.insertatbegin(3);
    dll.insertatend(1);
    dll.insertatend(5);
    dll.insertatend(2);
    dll.insertatend(6);
    dll.insertatend(3);
    // dll.insertatend(2);
    // dll.insertatend(4);
    // dll.insertatend(0);
    // dll.display_node();
    //dll.insertatarbitrary(6,5);
    //dll.display_node();

    //dll.deletenodeatbegin();
    //dll.deletenodeatend();
    //dll.deletearbitrary(4);
    //dll.reverse_dll();

    // if(dll.palindrome()==true){
    //     cout<<"It's a palindrome.";
    // }
    // else{
    //     cout<<"Not a palindrome.";
    // }
    //dll.display_node();
    vector<int>ans=DistanceBetweenCriticalPoints(dll.head,dll.tail);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}