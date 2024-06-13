#include <bits/stdc++.h>
using namespace std;

// int main(){
//     vector <int> myvec = {2,3,1,4,5,7,9,6};
//     for(int i=0; i<myvec.size(); i++){
//         int minvalue = i;
//         for(int j=i+1; j<myvec.size(); j++){
//             if(myvec[j]>myvec[minvalue]){
//                 minvalue = j;
//             }
//         }
//         int temp = myvec[i];
//         myvec[i] = myvec[minvalue];
//         myvec[minvalue] = temp;
//     }

//     for(auto value : myvec){
//         cout<<value<<" ";
//     }

    


//     return 0;
// }


int main(){
    vector <int> myvec = {1,2,3,4,5,6,7};
    for(int i=0; i<myvec.size(); i++){
        for(int j=i+1; j<myvec.size(); j++){
            if(myvec[i]<myvec[j]){
                
            }
        }
    }

    return 0;
}