#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n =20;
//     vector <bool> prime(n+1,true);
//     return 0;
// }
// int main(){
//     int n;
//     cout<<"enter array length";
//     cin>>n;
//     int myarr[n];
//     for(int i=0; i<n; i++){
//         cout<<"enter your number";
//         cin>>myarr[i];
//     }

//     for(int i=n-1;i>=0; i--){
//         cout<<myarr[i]<<" ";
//     }
//     return 0;
// }


// int main(){
//     int radius;
//     cout<<"enter radius";
//     cin>>radius;
//     float area = 3.14*(radius*radius);
//     cout<<area;
// }


int main(){
    int n = 30;
    bool mybool = true;
    for(int i=2; i<n-1; i++){
        if(n/i!=0){
            mybool = false;
            return false;
        }
    }
    cout<<mybool;
    return 0;
}