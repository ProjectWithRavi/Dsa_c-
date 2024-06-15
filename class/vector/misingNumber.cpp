#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution{
    public:
    int missingNumber(vector<int>& array, int n){        
        for(int i=0; i<n-1; i++){
            int myval = i;
            for(int j=i+1; j<n-1; j++){
                if(array[myval]>array[j]){
                    myval = j;
                }
            }
            int temp = array[i];
            array[i] = array[myval];
            array[myval] = temp;

           
            
        }
        
        for(int i=0; i<n; i++){
            if(array[i]!=i+1){
                return i+1;
            }
        }

        
    }

};

int main(){
    vector <int> arr={1,2,3,5};
    int n = 5;
    Solution obj1;
    int a = obj1.missingNumber(arr,n);
    cout<<a<<endl;
    return 0;
}

