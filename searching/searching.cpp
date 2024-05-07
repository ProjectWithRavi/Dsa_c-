/**************************** binary Search ******************************************
1. binary search using only sorting array
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int searchingValue(vector <int> arr,int targetValue){
    int start = 0;
    int end = arr.size()-1;
    int mid = (start+end)/2;
    // cout<<"mid value "<<mid<<endl;
    while(start<end){
        if(arr[mid]==targetValue){
            return mid;
        }else if(arr[mid]<targetValue){
            start = mid+1;
            // cout<<"start :"<<start<<endl;
            // cout<<"else if"<<endl;
        }else{
            end = mid-1;
            // cout<<"else "<<endl;
        }
        mid = (start+end)/2;
    }
    return false;

}

int main(){
    int arrSize,arrValue,targetValue;
    
    cout<<"enter array size :";
    cin>>arrSize;

    vector <int> arr(arrSize);
    for(int i=0; i<arrSize; i++){
        cout<<"enter array item :";
        cin>>arrValue;
        arr[i] = arrValue;

    }
    cout<<"target value :";
    cin>>targetValue;
    
    int getIndex = searchingValue(arr,targetValue);
    if(getIndex){
        cout<<"Target value is found which Present "<<getIndex<<" Index "<<endl;
    }else{
        cout<<"sorry targeted value is not Present "<<endl;
    }
    return 0;
}
