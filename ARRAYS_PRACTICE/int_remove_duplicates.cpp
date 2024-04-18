#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int remove_duplicates_from_sorted_array(vector<int>& array, int n) {
    // Initialize index for the new array without duplicates
    int i = 0;

    // Iterate through the array
    for (int j = 1; j < n; j++) {
        // If the current element is not equal to the previous element
        if (array[j] != array[i]) {
            // Increment index and update the next unique element
            i++;
            array[i] = array[j];
        }
    }

    // Return the length of the array without duplicates
    return i + 1;
}

int main() {
    vector<int> arr;
    int n;

    // Read the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    // Read the elements of the array
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    // Sort the array before removing duplicates
    sort(arr.begin(), arr.end());

    // Call the function to remove duplicates from the sorted array
    int result = remove_duplicates_from_sorted_array(arr, n);

    // Output the elements of the array without duplicates
    cout << "The array without duplicates: ";
    for (int i = 0; i < result; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Output the length of the array without duplicates
    cout << "The length of the array without duplicates: " << result << endl;

    return 0;
}

// #include<iostream>
// #include<string>
// #include<vector>
// #include<math.h>
// #include<bits/stdc++.h>

// using namespace std;

// int remove_duplicates_from_sorted_array(vector<int>array, int n){
// int i =0;
// for(int j =i+1;j<n;j++){
//     if(array[j]!=array[i]){
       
//         i++;
//          array[i]=array[j];

//     }
//     return i+1;
// }
// }

// int main(){
//     vector<int>arr;
//     int n = arr.size();
//     cout<<"enter the size of thearray";
//     cin>>n;
//     cout<<"enter the elements";
//     for(int i =0; i <n;i++){
//         int num;
//         cin>>num;
//         arr.push_back(num);
//     }
//     cout<<"the elements are ";
//     for(int i =0; i <n;i++){cout<<arr[i];}
//     cout<<endl;
//     sort(arr.begin(),arr.end());
//     int result=remove_duplicates_from_sorted_array(arr,n);
//     cout<<" the result"<<result<<endl;
//     return 0;
// }