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
//   vector <int> narr;
//   vector <int> arr;
//   int vsize,vvalue;
//   cout<<"enter vector size ";
//   cin>>vsize;

//   // add item in vector
//   for(int i=0; i<vsize; i++){
//     cout<<"enter vector item ";
//     cin>>vvalue;
//     arr.push_back(vvalue);
//   }

//   // compare unique value is present or not
//   int value = 0;
//   for (int i = 0; i < arr.size(); i++) {
//     for (int j = 0; j < arr.size(); j++) {
//       if (0 == (arr[i] ^ arr[j])) {
//         value++;
//       }
//     }
//     if (value == 1) {
//       int mvalue = arr[i];
//       narr.push_back(mvalue);
//     }
//     value = 0;
//   }

//  //print unique value
//   for (int i = 0; i < narr.size(); i++) {
//     cout << narr[i] << " value unique " << endl;
//   }
// }


// ************************ merge two vector
// vector <int> vec1;
// vector <int> vec2;
// vector <int> vec3;
// int vec1Size,vec2Size,value;
// cout<<"enter vector first size :";
// cin>>vec1Size;
// for(int i=0; i<vec1Size; i++){
//   cout<<"enter vector item :";
//   cin>>value;
//   vec1.push_back(value);
// }

// cout<<"enter vector second size :";
// cin>>vec2Size;

// for(int i=0; i<vec2Size; i++){
//   cout<<"enter seconder vector item :";
//   cin>>value;
//   vec2.push_back(value);
// }

// for(int i=0; i<vec1Size; i++){
//   value = vec1[i];
//   vec3.push_back(value);
// }
// for(int i=0; i<vec2Size; i++){
//   value = vec2[i];
//   vec3.push_back(value);
// }

// for(int i=0; i<vec3.size(); i++){
//   cout<<vec3[i]<<" ";
// }

// ************************ second way to merge two array
// int vecsize1,vecsize2;
// cout<<"enter vector first size :";
// cin>>vecsize1;
// cout<<"enter vector second size :";
// cin>>vecsize2;
// vector <int> vect1(vecsize1);
// vector <int> vect2(vecsize2);
// vector <int> mergeVector;

// cout<<"first vector "<<endl;

// for(int i=0; i<vect1.size(); i++){
//   cin>>vect1[i];
//   mergeVector.push_back(vect1[i]);

// }

// cout<<"second vector "<<endl;
// for(int i=0; i<vect2.size(); i++){
//   cin>>vect2[i];
//   mergeVector.push_back(vect2[i]);

// }

// for(int i=0; i<mergeVector.size(); i++){
//   cout<<mergeVector[i]<<" ";
// }



// ************ third way to merge two array;
int vecsize1,vecsize2;
cout<<"enter vector first size :";
cin>>vecsize1;
cout<<"enter vector second size :";
cin>>vecsize2;
vector <int> vect1(vecsize1);
vector <int> vect2(vecsize2);
vector <int> mergeVector(vecsize1+vecsize2);

cout<<"first vector "<<endl;

for(int i=0; i<vect1.size(); i++){
  cin>>vect1[i];
  mergeVector[i] = vect1[i];

}

cout<<"second vector "<<endl;
for(int i=0; i<vect2.size(); i++){
  cin>>vect2[i];
  mergeVector[vect1.size()+i] = vect2[i];

}

for(int i=0; i<mergeVector.size(); i++){
  cout<<mergeVector[i]<<" ";
}

// ***************************************************************************************************

// #############################
// int vec1size;
// cout<<"enter vector first size :";
// cin>>vec1size;

// **** if we not add any value in vec1 vector then bydiffualt 0 value print
// vector <int> vec1(vec1size);
// for(int i=0; i<vec1.size(); i++){
//   cout<<vec1[i]<<" ";
// }

// ******* if you change bidiffeult value of vector then you give second parameter
// vector <int> vec1(vec1size,5);
// for(int i=0; i<vec1.size(); i++){
//   cout<<vec1[i]<<" ";
// }





}