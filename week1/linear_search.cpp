/*Given an array of nonnegative integers,
design a linear algorithm and implement it using a program
to find whether a given key element is present in the array or not.
Also, find the total number of comparisons for each input case.
(Time Complexity = O(n), where n is the size of input).*/
#include<iostream>

using namespace std;



int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int j=0; j<n; j++)
    {
        cin>>arr[j];
    }

    int key,count=0,ii=0;
    bool is;
    cin>>key;
    for(int i=0; i< n; i++)
    {
        if(key==arr[i])
        {
            is= true;
            ii= i;
            break;
        }
        else{
            count++;
        }
    }
    if(is==true)
    {
        cout<<"Found at index " << ii << " in "<< count+1 << " num of steps."<<endl;
    }
    else{
        cout<<" Not Found"<<endl;
    }

}

