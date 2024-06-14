// https://leetcode.com/problems/sort-colors/description/

// #include <bits/stdc++.h>
// using namespace std;
// #include <map>


// void mysort(){

// }

// int main(){
//     vector <int> myv = {0,1,2,1,0,2,2,1,0};
//     for(int i=0; i<myv.size(); i++){
//         int minvalue = i;
//         for(int j=i+1; j<myv.size(); j++){
//             if(myv[j]<myv[minvalue]){
//                 minvalue = j;
//             }
//         }
//         int temp = myv[i];
//         myv[i] = myv[minvalue];
//         myv[minvalue] = temp;
//     }

//     for(auto value : myv){
//         cout<<value<<" ";
//     }
    
//     return 0;
// }




//**********************************************************************************************
// https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&difficulty=Easy&sortBy=submissions

// class Solution {
//   public:

//     // Note that the size of the array is n-1
//     int missingNumber(int n, vector<int>& arr) {
//         sort(arr.begin(), arr.end()); 
//         for(int i=1; i<n;i++){
//             if(i!=arr[i-1]){
//                 return i;
//             }
//         }
        

//     }
// };

// int main(){
//     Solution obj;
//     vector <int> arr = {1,2,3,5};
//     int result = obj.missingNumber(5,arr);
//     cout<<result<<endl;
//     return 0;
// }





//*********************************************************************** 
// https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&difficulty=Easy&sortBy=submissions

// class Solution {
//   public:

//     vector <int> duplicates(long long arr[],int n) {
//         vector <int> value;
//         map<int, int> maps;
//         for(int i=0; i<n; i++){
//             maps[arr[i]]++;
//         }

//         map<int, int>::iterator it = maps.begin();
//         while (it != maps.end()) {
//             int getv = it->second;
//             if(getv>1){
//                 int newtv = it->first;
//                 value.push_back(newtv);
//             }
//             ++it;
//         }
//         if(value.size()==0)return{-1};
        
//         return value;
        
    

        
        

//     }
// };


// int main(){
//     Solution obj;
//     vector <int> newv;
//     long long arr[] = {0,3,1,2};
//     newv = obj.duplicates(arr,4);
//     for(auto value:newv){
//         cout<<value<<" ";
//     }
//     return 0;
// }

