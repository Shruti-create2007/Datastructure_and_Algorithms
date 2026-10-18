#include<iostream>
using namespace std;
 
class complex{
    private:
    int real;
    int imag;
    public:
    complex(){
        real=0;
        imag=0;
    }

    complex(int r,int i){
        real=r;
        imag=i;
    }

    ~complex(){}
     
    void display(){
        cout<<real<<"+"<<imag<<"i";
    }

    complex add(complex c){
        int r=real+c.real;
       int i=imag+c.imag;
        return complex(r,i);

    }

    complex sub(complex c){
       int r=real-c.real;
       int i=imag-c.imag;
        return complex(r,i);

    }

    complex mul(complex c){
       int r=real*c.real+imag*c.imag;
       int i=real*c.imag-imag*c.real;
        return complex(r,i);
    }

};

int main(){
    complex c1(5,4),c2(2,1);

    cout<<"first complex number is: ";
    c1.display();
    cout<<endl;

    cout<<"second complex number is: ";
    c2.display();
    cout<<endl;

   complex sum=c1.add(c2);
    cout<<"addition of complex number is: ";
    sum.display();
    cout<<endl;

   complex diff=c1.sub(c2);
    cout<<"subtraction of complex number is: ";
    diff.display();
    cout<<endl;

    complex prod=c1.mul(c2);
    cout<<"multiplication of complex number is: ";
    prod.display();
    cout<<endl;

    return 0;
}
/*output:
first complex number is: 5+4i
second complex number is: 2+1i
addition of complex number is: 7+5i
subtraction of complex number is: 3+3i
multiplication of complex number is: 14+-3i
PS D:\shruti badhe>*/
