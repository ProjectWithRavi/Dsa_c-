#include <bits/stdc++.h>
using namespace std;

void ascending(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        int minindex = i;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }

    // sort(arr.begin(),arr.end());

    for(auto value:arr){
        cout<<value<<" ";
    }
    
}

void desending(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        int minindex = i;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j]>arr[minindex]){
                minindex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
    // sort(arr.rbegin(),arr.rend());


    for(auto value:arr){
        cout<<value<<" ";
    }

}

int main(){
    vector <int> arr = {2,3,1,5,9,7,0,4};
    string condition;
    cout<<"enter your condition :";
    cin>>condition;
    if(condition=="ascending"){
        ascending(arr);
    }else{
        desending(arr);
    }
    
    return 0;
}