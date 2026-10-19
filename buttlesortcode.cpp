#include<iostream>
using namespace std;
void bubblesort(int a[], int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
}
int main()
{
    int a[20],n;
    cout<<"how many elements to sort";
    cin>>n;
    cout<<"enter"<<n<<"unstored element";
    for (int i=0; i<n ; i++ )
    {
        cin>>a[i];
    }
    bubblesort(a,n);
    cout<<"sorted list is"<<endl;
     for (int i=0;i<n ; i++ )
      {
        cout<<a[i]<<endl;
      }

}
/output:
> cd "d:\shruti badhe\" ; if ($?) { g++ buttlesortcode.cpp -o buttlesortcode } ; if ($?) { .\buttlesortcode }
how many elements to sort5
enter5unstored element
20
40
10
50
80
sorted list is
10
20
40
50
80
PS D:\shruti badhe> 