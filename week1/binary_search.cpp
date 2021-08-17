/* Given an sorted array of positive integers, design an algorithm and implement
it using a program to find whether given key element is present in the array or not.
Also, find the total number of comparisons for each input case.
( Time Complexity = O(nlogn), where n is size of input).*/
#include<iostream>

using namespace std;



int main()
{

    int n,count=0;
    cin>>n;
    int arr[n];
    for(int j=0; j<n; j++)
    { //sorted array
        cin>>arr[j];
    }

    int key;
    cin>>key;
    int mid,ub,lb;
    ub=n;
    lb=0;
    mid = (ub+lb)/2;
    while(arr[mid]!=key && lb<=ub)
    {
        if(key < arr[mid])
        {
            ub=mid-1;
            count++;
        }
        else{
            lb=mid+1;
            count++;
        }
        mid=(ub+lb)/2;
    }
    if(arr[mid]==key)
    {
        cout<<"Found in "<<count<<" num of steps";
    }
    else {
            cout<<"Not Found";
    }
}
