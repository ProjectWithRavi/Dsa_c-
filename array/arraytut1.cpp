#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int myarr[5] = {10,20,30,40,50};
//     int end = (sizeof(myarr)/sizeof(int))-1;
//     int medium = 5/2;
//     for(int i=0; i<=medium; i++){
//         if(i==2){
//             cout<<myarr[end]<<endl;

//         }else{
//             cout<<myarr[i]<<endl;
//             cout<<myarr[end]<<endl;

//         }
//         end--;
//     }
//     return 0;
// }


// --------------------------------------------------------------------------------------

// int main(){
//     int mysize = 6;
//     int myarr[mysize] = {10,20,30,40,50,60};
//     int a = 0;
//     int result = 1;
//     int end = (sizeof(myarr)/sizeof(int))-1;
//     for(int i=0; i<mysize; i++){
//         if(result){
//             cout<<myarr[a]<<endl;
//             result = 0;
//             a++;
//         }else{
//             cout<<myarr[end]<<endl;
//             result= 1;
//             end--;
//         }
//     }
//     return 0;
// }

// ------------------------------------------------------------------------
// int main(){
//     int mysize;
//     cout<<"enter your array size";
//     cin>>mysize;
//     while(mysize<5){
//         cout<<"size of array minimum is 5"<<endl;
//         cout<<"enter your array size";
//         cin>>mysize;
//     }
    
//     int myarr[mysize] = {};
//     int medium = mysize/2;
//     for(int i=0; i<mysize; i++){
//         cout<<"enter array"<<endl;
//         cin>>myarr[i];
//     }

//     int start = 0;
//     int end = (sizeof(myarr)/sizeof(int))-1;
//     while(true){
//         if(start>end){
//             break;
//         }else{
//             if(start==medium){
//             cout<<myarr[start]<<" ";
//                 start++;
//             }else{
//                 cout<<myarr[start]<<" ";
//                 cout<<myarr[end]<<" ";
//                 start++;
//                 end--;

//             }
//         }

//     }
//     return 0;
// }