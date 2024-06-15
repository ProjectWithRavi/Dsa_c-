#include <bits/stdc++.h>
#include <vector>
using namespace std;

// int main(){
//     vector <int> arr = {1,2,3,4,5};
//     vector <int> arr2 = {3,5};
//     vector <int> narr;
//     int myindex  =0;
//     for(int i=0; i<arr.size(); i++){
//         if(arr[i]==arr2[myindex]){
//             narr.push_back(arr2[myindex]);
//             myindex++;
//         }
    
//     }

//     for(auto value:narr){
//         cout<<value<<" ";
//     }

//     return 0;
// }


// ***************************************************************

int resultfun(vector <int> narr){
    for(auto value:narr){
        cout<<value<<" ";
    }

}

int findmatchvalue(vector <int> arr,vector <int> arr2){
    vector <int> narr;
    int myindex = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==arr2[myindex]){
            narr.push_back(arr2[myindex]);
            myindex++;
        }
    
    }
    resultfun(narr);
    
}


int main(){
    int vfsize,vssize,myvalue;
    cout<<"enter vector first size :";
    cin>>vfsize;
    cout<<"enter vector second size :";
    cin>>vssize;
    vector <int> arr(vfsize);
    vector <int> arr2(vssize);
    for(int i=0; i<vfsize; i++){
        cout<<"enter first vector value :";
        cin>>myvalue;
        arr[i] = myvalue;

    }
    for(int i=0; i<vssize; i++){
        cout<<"enter second vector value :";
        cin>>myvalue;
        arr2[i] = myvalue;

    }
    findmatchvalue(arr,arr2);

    return 0;
}