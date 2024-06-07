                                //      Linked List
Implementation of a listnode in a singly linked list
#include<iostream>
using namespace std;
class Node{
    public:
   int value;
   Node* next;
   
   Node(int data){
    value=data;
    next=NULL;
}
};

// int main(){
//     Node* n=new Node(1);
//     cout<<n->value<<" "<<n->next<<endl;

//     return 0;
// }

// Traversal and Insertion of node at the Beginning

#include<iostream>
using namespace std;

class Node{
    public:

    int value;
    Node* next;

    Node(int data){
        value=data;
        next=NULL;
    }

};

void insertatbegin(Node* &head,int data){
    Node*  new_node= new Node(data);
    new_node->next=head;
    head=new_node;
}

// //Insertion of node at the end
void insertatend(Node* &head,int data){
    Node* new_node=new Node(data);

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=new_node;
     //we are not making new_node->next =NULL beacause by default value of next is NULL(defined in Class Constructor)
}

//Inserting node at arbitrary position
void insertarbitrary(Node* &head,int position,int data){   //position w.r.t 1,2,3,4,5.....
    Node* new_node=new Node(data);
    Node* temp= head;

    int current=0;

    while(current!=position-1){                           //but we need to treat position as 0,1,2,3....
        temp=temp->next;                                 // thus, position-1.
        current++;
    }
     //temp is pointing to node at positon-1.
    new_node->next=temp->next;
    temp->next=new_node;

}

// Updation at kth position
void updatenode(Node* &head,int position,int data){
    Node* temp=head;
    int current=0;
    while(current!=position-1){
        temp=temp->next;
        current++;
    }
    temp->value=data;
}

        //Deletion at start
void deletionatbegin(Node* &head){
    Node* temp=head;
    head=head->next;
    free(temp);
}

       //Deletion at end
void deletionatend(Node* &head){
    Node* second_last=head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;   //second_last pointer points to second last node.
    }
    Node* temp=second_last->next;   //temp node is the last node which need to be deleted.
    second_last->next=NULL;
    free(temp);
}

//Deletion at an arbitrary position
void delete_arbitrary(Node* &head,int position){
    Node* temp=head;
    for(int i=0;i<position-1-1;i++){
        temp=temp->next;
    }
    Node* dlt=temp->next;

    temp->next=temp->next->next;
    free(dlt);
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head=NULL;
    insertatbegin(head,2);
    display(head);
    insertatbegin(head,1);
    display(head);
    insertatend(head,3);
    display(head);
    insertatend(head,4);
    display(head);
    insertatbegin(head,0);
    display(head);
    insertarbitrary(head,1,11);
    display(head);
    insertarbitrary(head,3,15);
    display(head);
    updatenode(head,4,5);
    display(head);
    updatenode(head,1,10);
    display(head);
    deletionatbegin(head);
    display(head);

    deletionatend(head);
    display(head);

    delete_arbitrary(head,4);
    display(head);

    delete_arbitrary(head,3);
    display(head);
    return 0;
}

Given the head of the linked list,
1. delete every alternate element from the list starting from the second list.

#include<iostream>
using namespace std;

class Node{
    public:

    int value;
    Node* next;

    Node(int data){
        value=data;
        next=NULL;
    }

};

class LinkedList{
    public:

    Node* head;     //Property of linked list

    LinkedList(){
        head=NULL;
    }

   
void delete_alternate(Node* &head){

    Node* temp=head;
    
    while(temp!=NULL && temp->next!=NULL){
        Node* dlt=temp->next;
        temp->next=temp->next->next;
        free(dlt);
        temp=temp->next;
    }
}

//2. Delete Duplicate values
void deleteduplicates(Node* &head){

    Node* current_node=head;

    while(current_node!=NULL){
        while(current_node->next!=NULL && current_node->value==current_node->next->value){
            Node* dlt=current_node->next;
            current_node->next=current_node->next->next;
            free(dlt);

        }
        current_node=current_node->next;
    }
}

// 3. Reverse The Linked List
Node* reverseLL(Node* &head){
    Node* prevpointer=NULL;
    Node* currentpointer=head;

    while(currentpointer!=NULL){
        Node* nextpointer=currentpointer->next;
              currentpointer->next=prevpointer;
              prevpointer=currentpointer;
              currentpointer=nextpointer;
    }

    Node* new_head=prevpointer;
    return new_head;
}

//4. Reverse The Linked List Recursively
Node* recursive_reverseLL(Node* &head){
    //Base Case
    if(head==NULL || head->next==NULL){
        return head;
    }

    //Recursion
    Node* new_head=recursive_reverseLL(head->next);
    head->next->next=head;
    head->next=NULL;  //Now head is pointing to last node in reverse LL.
    return new_head;
}

int main(){
    LinkedList ll;
    ll.insertatend(1);
    ll.insertatend(2);
    ll.insertatend(3);
    ll.insertatend(4);
    ll.insertatend(5);
    ll.insertatend(6);
    ll.insertatend(7);

    ll.display();

//    delete_alternate(ll.head);

//    deleteduplicates(ll.head);

//    ll.head=reverseLL(ll.head);

    ll.head=recursive_reverseLL(ll.head);
    ll.display();
    return 0;
}

Question] Given two linked list, tell if they are equal or not. Two linked list are equal if they have same data and length of both
the list should be same.

#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int data){
        value=data;
        next=NULL;
    }
};

class LinkedList{
    public:

    Node* head;
    LinkedList(){
        head=NULL;
    }
     void insertatend(int data){
    Node* new_node=new Node(data);
     
     if(head==NULL){
        head=new_node;
        return;
     }


    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=new_node;
     
}
     void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

};

bool equal_LL(Node* head1,Node* head2){
    int count1=0;
    int count2=0;
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1!=NULL){
        temp1=temp1->next;
        count1++;
    }
    while(temp2!=NULL){
        temp2=temp2->next;
        count2++;
    }
    cout<<count1<<" & "<<count2<<endl;
    temp1=head1;
    temp2=head2;
    if(count1==count2){
        while(temp1->next!=NULL){
            if(temp1->value==temp2->value){
                temp1=temp1->next;
                temp2=temp2->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
    return false;
}
int main(){
    LinkedList LL1;
    LinkedList LL2;
    LL1.insertatend(10);
    LL1.insertatend(21);
    LL1.insertatend(32);
    LL1.insertatend(44);

    LL2.insertatend(10);
    LL2.insertatend(21);
    LL2.insertatend(32);
    LL2.insertatend(44);

    LL1.display();
    cout<<endl;
    LL2.display();

    if(equal_LL(LL1.head,LL2.head)==true){
        cout<<"Linked Lists are equal.";
    }
    else{
        cout<<"Linked Lists are not equal.";
    }
    return 0;
}

Question]Given the head of the linked list, Delete the kth node from the end of the list.

#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int data){
        value=data;
        next=NULL;
    }
};
class LinkedList{
public:
    Node* head;
    LinkedList(){
        head=NULL;
    }
     void insertatend(int data){
    Node* new_node=new Node(data);

     if(head==NULL){
        head=new_node;
        return;
     }


    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=new_node;

}
     void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
};

//In 2 Traversal (1 for count 1 for deletion)
int countnodes(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void delete_Kth_node(Node* &head,int k){
    int count=countnodes(head);
    int p_nodefromstart= count-k+1;
    Node* temp=head;
    for(int i=0;i<p_nodefromstart-1-1;i++){
       temp=temp->next;
    }
    Node* del_node=temp->next;
    temp->next=temp->next->next;
    free(del_node);
    return;
}

//IN only 1 Traversal(around half for temp2 to reach kth gap from temp1 and then temp2 get to NuLL so that temp1 get at k-1 postion.)
void delete_Knode_1traversal(Node* &head,int k){
    Node* temp1=head;
    Node* temp2=head;
    for(int i=0;i<k;i++){
         temp2=temp2->next;
    }
    while(temp2->next!=NULL){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    Node* del_node=temp1->next;
    temp1->next=temp1->next->next;
    free(del_node);
     return;
}

int main(){
    LinkedList LL1;

    LL1.insertatend(10);
    LL1.insertatend(21);
    LL1.insertatend(32);
    LL1.insertatend(44);
    LL1.insertatend(55);
    LL1.insertatend(66);
    LL1.insertatend(77);

    LL1.display();
    cout<<endl;
    delete_Knode_1traversal(LL1.head,3);
    LL1.display();


    return 0;
}


// Question] Given two sorted Linked list, merge them into 1 singly linked list such that the result is also sorted.
#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int data){
        value=data;
        next=NULL;
    }
};
class LinkedList{
public:
    Node* head;
    LinkedList(){
        head=NULL;
    }
     void insertatend(int data){
    Node* new_node=new Node(data);

     if(head==NULL){
        head=new_node;
        return;
     }


    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=new_node;

}
     void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
};
void merge_LL(Node* head1,Node* head2){
    Node* temp1=head1;
    Node* temp2=head2;
      LinkedList ll;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->value<temp2->value){
            ll.insertatend(temp1->value);
            temp1=temp1->next;
        }
        else{
            ll.insertatend(temp2->value);
            temp2=temp2->next;
        }
    }
    while(temp1!=NULL){
        ll.insertatend(temp1->value);
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        ll.insertatend(temp2->value);
        temp2=temp2->next;
    }
    ll.display();
    return;
}
int main(){
    LinkedList LL1;
    LinkedList LL2;
    LL1.insertatend(11);
    LL2.insertatend(22);
    LL1.insertatend(31);
    LL2.insertatend(42);
    LL1.insertatend(51);
    LL2.insertatend(62);
    LL1.insertatend(71);
    LL2.insertatend(82);
    LL1.insertatend(99);
    LL2.insertatend(100);

    LL1.display();
    LL2.display();
    cout<<endl;
    merge_LL(LL1.head,LL2.head);

    return 0;
}


//Question] Given an array of k  sorted Linked list, merge them into 1 singly linked list such that the result is also sorted.

#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int data){
        value=data;
        next=NULL;
    }
};
class LinkedList{
public:
    Node* head;
    LinkedList(){
        head=NULL;
    }
     void insertatend(int data){
    Node* new_node=new Node(data);

     if(head==NULL){
        head=new_node;
        return;
     }


    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=new_node;

}
     void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
};

Node* merge_LL(Node* head1,Node* head2){
    Node* temp1=head1;
    Node* temp2=head2;
      LinkedList ll;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->value<temp2->value){
            ll.insertatend(temp1->value);
            temp1=temp1->next;
        }
        else{
            ll.insertatend(temp2->value);
            temp2=temp2->next;
        }
    }
    while(temp1!=NULL){
        ll.insertatend(temp1->value);
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        ll.insertatend(temp2->value);
        temp2=temp2->next;
    }
    
    return ll.head;
}

Node* merge_k_LL(vector<Node*>&v){
      if(v.size()==0){
        return NULL;
      }

      while(v.size()>1){
        Node* mergedhead=merge_LL(v[0],v[1]);
        v.push_back(mergedhead);
        v.erase(v.begin());
        v.erase(v.begin());
      }
    return v[0];
}

int main(){
    vector<Node*>v;
    LinkedList LL1,LL2,LL3;

    LL1.insertatend(11);
    LL2.insertatend(22);
    LL1.insertatend(31);
    LL2.insertatend(42);
    LL1.insertatend(51);
    LL2.insertatend(62);
    LL1.insertatend(71);
    LL2.insertatend(82);
    LL1.insertatend(99);
    LL2.insertatend(100);
    LL3.insertatend(41);
    LL3.insertatend(52);
    LL3.insertatend(63);
    LL3.insertatend(73);
    LL3.insertatend(84);

    LL1.display();
    LL2.display();
    LL3.display();

    v.push_back(LL1.head);
    v.push_back(LL2.head);
    v.push_back(LL3.head);

    LinkedList mergeLL;
    mergeLL.head=merge_k_LL(v);

    mergeLL.display();
    return 0;
}

                                   SLOW-FAST POINTER
//Question] Find the middle element of the linked list.
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int data){
        value=data;
        next=NULL;
    }
};
class LinkedList{
public:
    Node* head;
    LinkedList(){
        head=NULL;
    }
     void insertatend(int data){
    Node* new_node=new Node(data);

     if(head==NULL){
        head=new_node;
        return;
     }


    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=new_node;

}
     void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
};

void middle_LL(Node* head){
    Node* temp1=head;
    Node* temp2=head;

    while(temp2!=NULL && temp2->next!=NULL){
        temp1=temp1->next;
        temp2=temp2->next->next;
    }
    int middle=temp1->value;
    cout<<middle;
    return;
}

int main(){
    LinkedList LL1;

    LL1.insertatend(1);
    LL1.insertatend(2);
    LL1.insertatend(3);
    LL1.insertatend(4);
    LL1.insertatend(5);
    LL1.insertatend(6);
    LL1.insertatend(7);
    LL1.insertatend(8);
    LL1.insertatend(9);

    LL1.display();
    cout<<endl;
    middle_LL(LL1.head);

    return 0;
}

//Question] Given the head of the linked list, check whether there exist a cycle or not.
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int data){
        value=data;
        next=NULL;
    }
};
class LinkedList{
public:
    Node* head;
    LinkedList(){
        head=NULL;
    }
     void insertatend(int data){
    Node* new_node=new Node(data);

     if(head==NULL){
        head=new_node;
        return;
     }


    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=new_node;

}
     void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
};
void checkCycle(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;

           if(slow==fast){
            cout<<slow->value<<endl;
            cout<<"Cycle exist.";
            return;
           }
    }

    cout<<"Cycle Not Exist";
     return;
}
int main(){
    LinkedList LL1;

    LL1.insertatend(1);
    LL1.insertatend(2);
    LL1.insertatend(3);
    LL1.insertatend(4);
    LL1.insertatend(5);
    LL1.insertatend(6);
    LL1.insertatend(7);
    LL1.insertatend(8);
    LL1.insertatend(9);
    LL1.display();
    cout<<endl;

    LL1.head->next->next->next->next->next->next->next=LL1.head->next->next;
    checkCycle(LL1.head);

    return 0;
}


//Check if the linked list is palindrome or not.
#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int data){
        value=data;
        next=NULL;
    }
};
class LinkedList{
    public:
    Node* head;
    LinkedList(){
        head=NULL;
    }
     void insertatend(int data){
    Node* new_node=new Node(data);

     if(head==NULL){
        head=new_node;
        return;
     }


    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=new_node;

}
     void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
   }
};

 Node* middle_LL(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* middle=slow;

    return middle;
}

bool ispalindrome(Node* head){
    //Break the LL in the middle
    Node* current=middle_LL(head)->next;
    Node* prev=middle_LL(head);
    middle_LL(head)->next=NULL;

    //Reverse the second half of the LL.
    while(current){
        Node* nextnode=current->next;
        current->next=prev;
        prev=current;
        current=nextnode;
    }

    //Check if two LL are equal or not.
    Node* head1=head;
    Node* head2=prev;

    while(head2){
        if(head1->value!=head2->value){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
}

int main(){
    LinkedList LL;
    LL.insertatend(1);
    LL.insertatend(2);
    LL.insertatend(3);
    LL.insertatend(3);
    LL.insertatend(2);
    LL.insertatend(1);

    LL.display();
    cout<<ispalindrome(LL.head)<<endl;
    return 0;
}

