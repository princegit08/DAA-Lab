/*Given a sorted array of positive intergers, design an algorithm and
implement it using a program to find three indices i,j,k such that
arr[i]+arr[j]=arr[k].*/

#include<bits/stdc++.h>
using namespace std;

int main(){
cout<<"Enter the array Size"<<endl;
int n;
cin>>n;
cout<<"Enter the sorted array elements"<<endl;

vector<int>arr;
int h=0;
while(h<n){
        int a;
cin>>a;
arr.push_back(a);
h++;
}
int i,j,k;
for( i=n-1;i>0;i--)
{

for( j=0;j<=i;j++)
{
for(k=j+1;k<=i;k++)
{
if(arr[j]+arr[k]==arr[i])
{
    cout<<"Indices"<<j<<"+"<<k<<"="<<i<<endl;
break;
}

}

}

}

}
