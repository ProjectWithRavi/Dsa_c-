#include <bits/stdc++.h> //global libary
#include <algorithm>  //use for sort method
#include <vector>     //use for vector
using namespace std;

int main(){
    vector <int> arr = {3,2,4,1,6};
    sort(arr.begin(),arr.end());
    
    for(auto value:arr){
        cout<<value<<" ";
    }

    return 0;
}