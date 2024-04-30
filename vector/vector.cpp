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
    // vector<int> myvalue;
    // int vsize,value;
    // cout<<"enter vector size :";
    // cin>>vsize;
    // for(int i=0; i<vsize ;i++){
    //     cout<<"enter vector value :";
    //     cin>>value;
    //     myvalue.push_back(value);
    // }

    // for(int i=0; i<vsize; i++){
    //     cout<<myvalue[i]<<" ";
    // }


    // return 0;



    // *******************************8 xor oprator
    // vector <int> myint;
    // int vsize,value;
    // cout<<"enter vector size :";
    // cin>>vsize;

    // for(int i=0; i<vsize; i++){
    //     cout<<"enter vector item :";
    //     cin>>value;
    //     myint.push_back(value);
    // }


// ********************************** find Uniqe value
  vector <int> narr;
  vector <int> arr;
  int vsize,vvalue;
  cout<<"enter vector size ";
  cin>>vsize;

  // add item in vector
  for(int i=0; i<vsize; i++){
    cout<<"enter vector item ";
    cin>>vvalue;
    arr.push_back(vvalue);
  }

  // compare unique value is present or not
  int value = 0;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr.size(); j++) {
      if (0 == (arr[i] ^ arr[j])) {
        value++;
      }
    }
    if (value == 1) {
      int mvalue = arr[i];
      narr.push_back(mvalue);
    }
    value = 0;
  }

 //print unique value
  for (int i = 0; i < narr.size(); i++) {
    cout << narr[i] << " value unique " << endl;
  }
}


