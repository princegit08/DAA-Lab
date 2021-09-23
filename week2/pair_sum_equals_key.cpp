/*Given an array of non-negative integers, design an algorithm and a
program to count the number of pairs of integers such that their difference is equal
to a given key,k.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
cout<<"Enter the array Size"<<endl;
int n;
cin>>n;
cout<<"Enter the array elements"<<endl;

vector<int>arr;
int h=0;
while(h<n){
int a;
cin>>a;
arr.push_back(a);
h++;
}
cout<<"Enter the KEY"<<endl;
int key;
cin>>key;
int i,j,k;

bool f=false;
int c=0;
for( j=0;j<n;j++)
{
for(k=j+1;k<n;k++)
{
if(arr[j]+arr[k]==key)
{
    cout<<"arr["<<j<<"] + arr["<<k<<"] = "<<key<<endl;
    f=true;
   c++;
}

}

}
if(f==false) cout<<"No any pair sum is equal to key"<<endl;
else{
    cout<<"TOTAL "<<c<<" Pair exists"<<endl;
}


}
