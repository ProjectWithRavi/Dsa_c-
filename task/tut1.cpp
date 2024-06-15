#include <bits/stdc++.h>
using namespace std;

// ------------------------------------- find average
// int avg(vector<int>& arr){
//     int start = 0;
//     int end = arr.size()-1;
//     int sum = 0;
//     while(start<end){
//         sum+=(arr[start]+arr[end]);
//         start++;
//         end--;

//     }
//     if(arr.size()%2!=0){
//         sum+=arr[arr.size()/2];
//         return sum/2;
//     }
//     return sum/2;

// }

// int main(){
//     vector <int>arr = {1,2,3,4,5,6,7};
//     int result = avg(arr);
//     cout<<result<<endl;
    
//     return 0;
// }


//************************************************************ check array are sorted or not
// bool checksort(vector<int>& arr){
//     for(int i=0; i<arr.size()-1; i++){
//         if(arr[i]<arr[i+1]){
//             continue;
//         }else{
//             return false;
//         }
//     }
//     return true;
    

// }

// int main(){
//     vector <int>arr = {1,2,3,4,5,6,7};
//     bool result = checksort(arr);
//     cout<<result<<endl;
    
//     return 0;
// }