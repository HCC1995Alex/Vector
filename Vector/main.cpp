//
//  main.cpp
//  Vector
//
//  Created by 鄭旭程 on 2019/12/13.
//  Copyright © 2019 鄭旭程. All rights reserved.
//

#include <iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
#include <algorithm>
#include<fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    int dec;
    int dec1;
    /*
    vector<int> v = {3, 6, 9, 12, 15, 18, 21};
    
    v.insert(v.begin(),8);//在最前面插入新元素。
    v.insert(v.begin()+2,1);//在迭代器中第二个元素前插入新元素
    v.insert(v.end(),3);//在向量末尾追加新元素。
    vector<int>::iterator ptr;
    for (ptr = v.begin(); ptr < v.end(); ptr++){
        cout << *ptr << " ";
    }
    */
    // insert code here...
    //cout << v[5] << endl;;// Both v.at(#) and v[#] are ok
    //v.push_back(9);
    //cout << v.size() << endl;
    //v.pop_back();//remove last element
    
    //v.erase(v.end()-1);// = v.pop_back()
    //v.erase(v.begin());
    //sort(v.begin(), v.end());//ascending order
    //sort(v.begin(), v.end(), greater<int>());//descending order
    
    vector<int> v;

    cout << "please input" << endl;
    cin >> dec;
    dec1 = dec;
    while (dec >= 1){
        v.insert(v.begin(),dec % 2);
        dec = dec / 2;
    }
    vector<int>::iterator ptr;
    for (ptr = v.begin(); ptr < v.end(); ptr++){
        cout << *ptr << " ";
    }
    
    ofstream fout;
    fout.open("binary.txt");
    fout << "Decimal : " << dec1 << endl;
    fout << "Binary : ";
    for (ptr = v.begin(); ptr < v.end(); ptr++){
        fout << *ptr ;
    }
        fout << '\n';
    fout.close();
    /*
    vector<int> v;
    cout << "please input" << endl;
    cin >> dec;
    while (dec >= 1){
        v.push_back(dec % 2);
        dec = dec / 2;
    }
    v.push_back(dec);
    //cout << dec << endl;

    vector<int>::iterator ptr;
    for (ptr = v.end()-1; ptr >= v.begin(); ptr--){
        cout << *ptr << " ";
    }
     */

    /*
    while (!v.empty()){
        cout << v.back() << " ";
        v.pop_back();
    }
    cout << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    */
    /*
    vector<int> v1;
    vector<int> v2;
    v1.assign(v.begin(), v.end());// copy all v to v1
    cout << v1.at(5) << endl;
    
    
    
    v2.assign(20, 3);// assign overwrite the data
    cout << v2.at(5) << endl;
    v2.assign(v.begin()+3, v.end());
    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }
    */
    return 0;
}
