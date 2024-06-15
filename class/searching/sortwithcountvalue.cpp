#include <bits/stdc++.h>
using namespace std;

int countvalue(int narr[],int size){
    int targetvalue = 0;
    int start = 0;
    int end = size-1;
    while(start<=end){
        if(narr[start]==narr[end]){
            int result = (end-start)+1;
            return result;
        }else if(narr[start]==targetvalue){    
            end--; 
        }else if(narr[end]==targetvalue){
            start++;  
        }
        else{
            start++;
            end--;
        }
    }
    return false;
}

int sorted(int arr[], int n){
    for(int i=0; i<n; i++){
        int minvalue = i;
        for(int j=i+1; j<n; j++){
            if(arr[minvalue]>arr[j]){
                minvalue = j;

            }
        }
        int temp = arr[i];
        arr[i] = arr[minvalue];
        arr[minvalue] = temp;
    }
    
    int getindx = countvalue(arr,n);
    if(getindx){
        cout<<getindx<<endl;
    }else{
        cout<<"this value not present "<<endl;
    }
    

}

int main(){
    int arr[11] = {1,4,4,6,7,2,3,3,4,3,0};
    sorted(arr,11);
    return 0;
}


