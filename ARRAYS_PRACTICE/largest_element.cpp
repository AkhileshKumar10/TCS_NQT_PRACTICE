#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largest_element(vector<int>arr,int n){
    int largest =arr[0];
    for(int i =0; i <n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
       // cout<<"enter the array";
    // int n = arr.size();
    // for(int i =0; i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<" the array is ";
    // for(int i =0; i <n;i++){
    //     cout<<arr[i];
    // }
 vector<int>arr;
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    cout<<"enter the elements in the array";
    for(int i =0; i <n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    cout<<"the array is ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int result= largest_element(arr, n);
    cout<<"the largest element is "<<result<<endl;
}