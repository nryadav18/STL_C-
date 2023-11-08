//Vector
#include<bits/stdc++.h>
using namespace std;
int main (){
    //nry_code();
    int n;
    cin>>n;
    vector<int>v; //declaration
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x); //pushing back or inserting an element into vector
    }
    v.pop_back(); //Last element in the vector will be removed
    int size = v.size(); //to get the size of a vector
    for (int i=0;i<size;i++){
        cout << v[i] << " "; 
    }
    cout << endl;
    //v[i] -->to Fetch an element in the vector
    cout << v.front() << endl; //First Element in a vector
    cout << v.back() << endl; // Last Element in a vector
    
    //All these Above Operations Take O(1) Time to Execute
    
    return 0;
}
