#include<iostream>
using namespace std;

int linear_search(int a[],int n,int x){
    for(int i=0;i<n-1;i++){
        if(a[i]==x){
            return i;
        }
    }
}

int main(){
    int n,x;
    int a[10];

    cout<<"enter the size of the array"<<endl;
    cin>>n;

    cout<<"enter the elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"enter the element to find:"<<endl;
    cin>>x;

    int p=linear_search(a,n,x);
    cout<<"the element found at the position:"<<p<<endl;

    return 0;
    
}
/*output
How many elements? 5
Enter 5 elements:
10
20
30
40
50
Enter element to search: 
34
Element not found
PS D:\shruti badhe> */
