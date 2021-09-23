/*
Given a sorted array of positive integers containing few duplicate elements, design an algorithm
and implement it using a program to find whether the given key element is present in the array
or not. If present, then also find the number of copies of given key.
*/



#include<iostream>

using namespace std;

class dup{

public:
    int key ,count=0;;
    bool f=false;
    int dupp( )

{


    int n,k=0;


    int test;
    cout<<"Enter Total Number of Test Cases:"<<endl;
    cin>>test;
    while(test>0)
    {

    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array"<<endl;
    for(int j=0; j<n; j++)
    {
        cin>>arr[j];
    }

    cout<<"enter the key element: ";
    cin>>key;

    for(int i=0; i<n; i++)
    {
        if(key==arr[i])
        {

            f=true;
            count++;
        }

    } test--;
    }
}
};

int main()
{

dup d;
d.dupp();
    if(d.f==true)
    {

    cout<< d.key <<":"<< d.count;
    }
    else
        {
        cout<<"Key not present";
        }

}

