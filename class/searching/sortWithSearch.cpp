#include <bits/stdc++.h>
using namespace std;


int searcharr(int narr[],int size){
    int targetvalue = 9;
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<end){
        if(narr[mid]==targetvalue){
            return mid;
        }else if(narr[mid]<targetvalue){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = (start+end)+2;
    }
    return false;
    


}
int sortarr(int arr[],int n){
    for(int i=0; i<n; i++){
        int minvalue = i;
        for(int j=i+1; j<n; j++){
            if(arr[minvalue]>arr[j]){
                minvalue = j;
            }
        }
        int temp = arr[i];
        arr[i] = minvalue;
        arr[minvalue] = temp;

    }
    int getindx = searcharr(arr,n);
    if(getindx){
        cout<<"this value present in array"<<endl;
    }else{
        cout<<"this value not present "<<endl;
    }
    

}

int main(){
    int arr[7] = {1,3,2,5,8,4,9};
    sortarr(arr,7);
    return 0;
}