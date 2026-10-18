#include<iostream>
using namespace std;
#define MAX 5
class stack
{
 private:
 int a[MAX];
 int top;
 public:
 stack()
 {
    top=-1;
 }
 int empty()
{
    if(top==-1)
    return(1);
    else
    return(0);
}
 int full()
 {
    if(top==MAX-1)
    return(1);
    else
    return(0);
 }
 void push(int x)
 {
    top++;
    a[top]=x;

 }
 int pop()
 {
    int x=a[top];
    top--;
    return(x);
 }
 int peek()
 {
    return(a[top]);
 }
 void display()
{
        for(int i=top ; i>=0 ; i--) 
            cout<<a[i]<<endl;
    }
};
int main()
{
    stack s;
    if(s.full())
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
       s.push(10);
       cout<<"stack content after push operation";
    }
    s.display();

    if(s.full())
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
       s.push(20);
       cout<<"stack content after push operation";
    }
    s.display();
    if(s.full())
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
       s.push(30);
       cout<<"stack content after push operation";
    }
    s.display();

    if(s.full())
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
       s.push(40);
       cout<<"stack content after push operation";
    }
    s.display();

    if(s.full())
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
       s.push(50);
       cout<<"stack content after push operation";
    }
    s.display();

    if(s.full())
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
       s.push(60);
       cout<<"stack content after push operation";
    }
    s.display();


    if (s.empty())
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"poped out element is"<<s.pop();
    }
    cout<<"stack contain after pop operation";
    s.display();


    if (s.empty())
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"poped out element is"<<s.pop();
    }
    cout<<"stack contain after pop operation";
    s.display();


     if (s.empty())
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"poped out element is"<<s.pop();
    }
    cout<<"stack contain after pop operation";
    s.display();


      if (s.empty())
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"poped out element is"<<s.pop();
    }
    cout<<"stack contain after pop operation";
    s.display();


      if (s.empty())
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"poped out element is"<<s.pop();
    }
    cout<<"stack contain after pop operation";
    s.display();


      if (s.empty())
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"poped out element is"<<s.pop();
    }
    cout<<"stack contain after pop operation";
    s.display();

    return(0);
}
/*output:
PS C:\Users\Students> cd "d:\shruti badhe\" ; if ($?) { g++ stackusingarray.cpp -o stackusingarray } ; if ($?) { .\stackusingarray }
stack content after push operation10
stack content after push operation20
10
stack content after push operation30
20
10
stack content after push operation40
30
20
10
stack content after push operation50
40
30
20
10
stack is full
50
40
30
20
10
poped out element is50stack contain after pop operation40
30
20
10
poped out element is40stack contain after pop operation30
20
10
poped out element is30stack contain after pop operation20
10
poped out element is20stack contain after pop operation10
poped out element is10stack contain after pop operationstack is emptystack contain after pop operation
PS D:\shruti badhe> */