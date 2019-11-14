//
// Created by Huang Yanyi on 2019-11-14.
//
#include "permute.h"
#include <iostream>

vector<vector<int>> result;
using namespace std;
int permuteHelper(vector<int>& nums, vector<int>& chosen,int target){
    for(int item: nums){
        cout<<item<<","<<endl;
    }
    for(int it: chosen){
        cout<<it<<","<<endl;
    }
    cout<<"target is: "<<target<<endl;

  return 0;
}
void listPermuteNumbers(vector<int>& nums,int target){
    cout<<"test for output"<<endl;
//    vector<int> chosen;
//    permuteHelper(nums,chosen,target);
}

