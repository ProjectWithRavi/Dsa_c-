#include <iostream>
using namespace std;

// int main(){
//     int n = 30;
//     bool mybool = true;
//     for(int i=2; i<n-1; i++){
//         if(n%i==0){
//             mybool = false;
//             break;
//         }
//     }
//     if(mybool){
//         cout<<"your number is prime number";
//     }else{
//         cout<<"is not prime";
//     }
//     return 0;
// }


// int main(){
//     int n = 30;
//     bool mybool = true;
//     for(int i=2; i<n-1; i++){
//         if(n%i==0){
//             cout<<i<<" devide by "<<n<<endl;
//         }else{
//             cout<<i<<" not devide by "<<n<<endl;
//         }
//     }
//     return 0;
// }


// -------------------------------------------------
// string myfun(int n){
//     if(n<=1){
//         return "false";
//     }
//     int c = 2;
//     while(c*c<=n){
//         if(n%c==0){
//             return "false";
//         }
//         c++;
//     }
//     return "true";

// }

// int main(){
//     int n = 20;
//     for(int i=2; i<n; i++){
//         cout<<i<<" is prime "<<myfun(i)<<endl;
//     }
// }


// -------------------------------------------------
bool myfun(int n){
    if(n<=1){
        return false;
    }
    int c = 2;
    while(c*c<=n){
        if(n%c==0){
            return false;
        }
        c++;
    }
    return true;

}

int main(){
    int n = 20;
    int myarr[n];
    for(int i=2; i<n; i++){
        // if(myfun(i)){
        //     cin>>myarr[i];
        // }
        cout<<i<<" is prime "<<myfun(i)<<endl;
    }
    // cout<<myarr[1]<<endl;
    // for(int i=0; i<sizeof(myarr)/sizeof(int);i++){
    //     cout<<myarr[i];
    // }
}