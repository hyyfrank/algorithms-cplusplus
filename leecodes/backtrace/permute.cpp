//
// Created by Huang Yanyi on 2019-11-14.
//
#include "permute.h"
#include <iostream>
using namespace std;



int permuteHelper(vector<string>& nums,vector<string>& chosen){
    if(nums.size()==0){
        cout<<"(";
        for(string item : chosen)
        {
            cout<<item<<",";
        }
        cout<<")"<<endl;
    }
    for(int i=0;i<nums.size();i++){
        //select
        string tmp = nums[i];
        nums.erase(nums.begin()+i);
        chosen.push_back(tmp);
        //expore
        permuteHelper(nums,chosen);
        //un-select
        chosen.erase(chosen.begin()+chosen.size()-1);
        nums.insert(nums.begin()+i,tmp);
    }

}
void listPermuteNumbers(vector<string>& str){
    vector<string> chosen;
    permuteHelper(str,chosen);
}

