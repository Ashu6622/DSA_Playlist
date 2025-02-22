#include<bits/stdc++.h>
using namespace std;

class Node{
    int val;
    Node* next;

    public:

    Node(){
        this->val = 0;
        this->next = NULL;
    }
    Node(int val){
        this->val = val;
        this->next = NULL;
    }

    void insert(Node* head ,int val){
        Node* temp = head;

        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = new Node(val);
    }

    void print(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    Node* reverse(Node* head){
        if(head == NULL || head->next == NULL){
            return head;
        }

        Node* newHead = reverse(head->next);
        Node* temp = head->next;
        temp->next = head;
        head->next = NULL;

        return newHead;
    }

    void printReverse(Node* head){

        Node* temp = reverse(head);


        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){

    Node* head = new Node(10);
    head->insert(head, 20);
    head->insert(head, 30);
    head->insert(head, 40);
    head->insert(head, 50);
    head->print(head);
    head->printReverse(head);

   

}