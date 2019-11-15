//
// Created by Huang Yanyi on 2019-11-15.
//

#include <iostream>
#include "sublist.h"
using namespace std;

void printVector(vector<string>& chosen){
    if(chosen.size()==1){
        cout<<"("<<chosen[0]<<")"<<endl;
    }else{
        for (int j = 0; j < chosen.size(); ++j) {
            if(j==0){
                cout<<"("<<chosen[j]<<",";
            }else if(j==chosen.size()-1){
                cout<<chosen[j]<<")"<<endl;
            }else{
                cout<<chosen[j]<<",";
            }
        }
    }
}
void subListHelper(vector<string>& items,vector<string>& chosen,int index,vector<vector<string>>& result){
    result.push_back(chosen);
    for (int i = index; i < items.size(); i++) {
        //chose
        chosen.push_back(items[i]);
        // explore
        subListHelper(items, chosen, i + 1,result);
       // un-chose
        chosen.pop_back();
    }
}
void printSubList(vector<string>& allItem){
    vector<string> chosen;
    vector<vector<string>> result;
    subListHelper(allItem,chosen,0,result);
    for(auto it:result){
        printVector(it);
        cout<<endl;
    }
}


