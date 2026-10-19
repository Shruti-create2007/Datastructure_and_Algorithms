#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
class linked_list
{
    public:
    node *head;
    linked_list()
    {
        head=NULL;


    }
    

 void insert(int x)
 {
    node *p=new node(x);
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        node *q=head;
        while(q->next!=NULL)
        q=q->next;
        q->next=p;
    }
 }
 void display(void)
 {
    node *q;
    q=head;
    while(q!=NULL)
    {
        cout<<q->data<<"=>";
        q=q->next;
    }

 }
 void remove(int x)
 {
    node *p=NULL;
    if(head->data==x)
    {
        p=head;
        head=head->next;
        delete p;
        return;
    }
    node *q=head;
    while(q->next!=NULL)
    {
    if(q->next->data==x)
    {
        p=q->next;
        q->next=p->next;
        delete p;
        return;
    }
    q=q->next;

    }
    cout<<"Data not found in list"<<endl;
 }
};

int main()
{
    linked_list list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    cout<<"List before removing element:"<<endl;
    list.display();
    cout<<endl;
    list.remove(30);
    cout<<"List after removing element:"<<endl;
    list.display();
    return 0;

}
//output:
PS D:\shruti badhe> cd "d:\shruti badhe\" ; if ($?) { g++ single_linkedlist.cpp -o single_linkedlist } ; if ($?) { .\single_linkedlist }
List before removing element:
10=>20=>30=>40=>50=>
List after removing element:
10=>20=>40=>50=>
PS D:\shruti badhe> 




        
        
    
   




