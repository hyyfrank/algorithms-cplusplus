//
// Created by Huang Yanyi on 2019-11-14.
//
#include "permute.h"
#include <iostream>
using namespace std;



int permuteHelper(vector<string>& nums,vector<string>& chosen){
    for (int j = 0; j < chosen.size(); ++j) {
        if(chosen.size()==5){
            if(j==0){
                cout<<"("<<chosen[j]<<",";
            }else if(j==chosen.size()-1){
                cout<<chosen[j]<<")"<<endl;
            }else{
                cout<<chosen[j]<<",";
            }
        }
    }
    for(int i=0;i<nums.size();i++){
        //select
        string tmp = nums[i];
        nums.erase(nums.begin()+i);
        chosen.push_back(tmp);
        //explore
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

