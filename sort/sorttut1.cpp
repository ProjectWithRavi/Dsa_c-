// https://leetcode.com/problems/sort-colors/description/

#include <bits/stdc++.h>
using namespace std;

void mysort(){

}

int main(){
    vector <int> myv = {0,1,2,1,0,2,2,1,0};
    for(int i=0; i<myv.size(); i++){
        int minvalue = i;
        for(int j=i+1; j<myv.size(); j++){
            if(myv[j]<myv[minvalue]){
                minvalue = j;
            }
        }
        int temp = myv[i];
        myv[i] = myv[minvalue];
        myv[minvalue] = temp;
    }

    for(auto value : myv){
        cout<<value<<" ";
    }
    
    return 0;
}



