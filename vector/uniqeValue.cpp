#include <bits/stdc++.h>
#include <vector>
using namespace std;

int findUniqueElement(vector <int> values){
    int uniqeValue = 0;
    for(int i=0; i<values.size();i++){
        uniqeValue = uniqeValue^values[i];
    }
    return uniqeValue;

}

int main(){
    vector <int> value ={1,1,3,4,4};
    int uniquevalue = findUniqueElement(value);
    cout<<"the uniquevale is : "<<uniquevalue<<endl;
    return 0;
}