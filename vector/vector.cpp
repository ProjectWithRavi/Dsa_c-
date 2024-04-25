//vector -->  dynamic array data structure

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    // ******************************** add integer in vector

    // vector <int> element;
    // element.push_back(7);
    // element.push_back(1);
    // element.push_back(6);
    // element.push_back(9);
    // // cout<<element.size();
    // for(int i=0; i<element.size(); i++){
    //     cout<<element[i]<<endl;
    // }


    // ****************************** add string in vector 
    // vector <string> mystr;
    // mystr.push_back("ravi");
    // mystr.push_back("ram");
    // mystr.push_back("shyam");
    // mystr.push_back("shiv");
    // for(int i=0; i<mystr.size(); i++){
    //     cout<<mystr[i]<<endl;
    // }

    // ************************ add value and print value in vector
    vector<int> myvalue;
    int vsize,value;
    cout<<"enter vector size :";
    cin>>vsize;
    for(int i=0; i<vsize ;i++){
        cout<<"enter vector value :";
        cin>>value;
        myvalue.push_back(value);
    }

    for(int i=0; i<vsize; i++){
        cout<<myvalue[i]<<" ";
    }


    return 0;
}