#include<iostream>
using namespace std;
int main()
{
int k;
cout<<"Enter a no. ";
cin>>k;
for(int i=1;i<=k;i++)
    {
        if(k%i==0)
        cout<<i<<" ";
    }
return 0;
}
