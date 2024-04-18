#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> rotate_array(vector<int>array,int n){
    int temp =array[0];
    for(int i =1;i<=n;i++){
        array[n-1]=array[i];
    }
    array[n-1]=temp;
    return array;
}
int main() {
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

    return 0;
}


