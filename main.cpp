#include <iostream>
#include "acm-icpc/quicksort/quicksort.h"
#include "acm-icpc/DFS/dfs.h"
#include "acm-icpc/DFS2/dfs2.h"
#include "acm-icpc/fibnacci/fibnacci.h"

#include "leecodes/array/duplicate.h"
#include "leecodes/array/findMediaSort.h"
#include "leecodes/array/rotatedArray.h"
#include "leecodes/array/sumoftwointeger.h"
#include "leecodes/array/TwoSumNumberIndex.h"
#include "leecodes/array/removeElement.h"
#include "leecodes/array/ThreeSum.h"
#include "leecodes/array/myPow.h"
#include "leecodes/array/mySqrt.h"

#include "leecodes/backtrace/permute.h"
#include "leecodes/backtrace/sublist.h"

using namespace std;

int main() {
    // fabnacci calc
//    cout << "********************fabnacci function**************************" << endl;
//    int num = 7;
//    fibonacci(num);
//    log1(num);
//    cout << "use another method:";
//    log2(num);
//
//    cout << "***********************quick sort****************************" << endl;
//
//    vector<int> A = {6, 10, 13, 5, 8, 3, 2, 25, 4, 11};
//    int p = 0;
//    int q = 10;
//
//    cout << "======Original=======" << endl;
//    for (auto e: A)
//        cout << e << " ";
//    cout << endl;
//    quickSort(A, p, q);
//    cout << "======Sorted=======" << endl;
//    for (auto e: A)
//        cout << e << " ";
//    cout << endl;
//
//
//    cout << "***********************dfs demo****************************" << endl;
//    if (dfs(0, 0)) {
//        cout << "Yes!" << endl;
//    } else {
//        cout << "No!" << endl;
//    }
//
//    cout << "***********************dfs2 demo****************************" << endl;
//    cout << "number of the pool is: " << solve() << endl;
//
//
//
//    cout << "***********************lee code array duplicate****************************" << endl;
//
//    vector<int> duplicateA = {6, 6, 7, 10, 10, 10, 10, 20};//先排序
//    int number = removeDuplicates3(duplicateA);
//    cout << "after delete, array number is:" << number << endl;
//    vector<int> duplicateB = {2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 6, 7};
//    int number2 = removeDuplicates2(duplicateB);
//    cout << "after delete, array number is: " << number2 << endl;
//
//    cout << "***********************lee code: find kth number ****************************" << endl;
//    vector<int> first = {1, 2, 3, 4, 5, 6};
//    vector<int> second = {1, 4, 7, 2, 122, 9, 1};
//    double re = findMedianSortedArrays(first, second);
//    cout << "the medium number of arrays is :" << re << endl;
//
//    cout << "***********************lee code: find in rotate array. ****************************" << endl;
//
//    vector<int> nums = {6, 7, 0, 1, 2, 3, 4};
//    vector<int> nums2 = {1, 3, 1, 1, 1};
//
//    int itIndex = rsearch(nums, 2);
//    int itIndex2 = rsearch2(nums2, 3);
//    int rotIndex = hyysearch(nums,0,7,2);
//    cout << "the num founded with index:" << itIndex << endl;
//    cout << "the num founded in duplicate array with index:" << itIndex2 << endl;
//    cout<< "the num founded with index:"<<rotIndex<<endl;
//
//
//
//    cout << "***********************lee code: sum of two integer. ****************************" << endl;
//    int reSumof = getSum(1, 2);
//    cout << "the num two integer:" << reSumof << endl;
//
//    cout << "***********************lee code: sum of two integer index. ****************************" << endl;
//    vector<int> sumArray = {2, 4, 5, 7, 8, 11, 15};
//    vector<int> reSumofNumIndex = twoSumIndex(sumArray, 12);
//    cout << "the num two integer index is:" << endl;
//    int count = reSumofNumIndex.size();
//
//    for (int i = 0; i < count; i++) {
//        cout << reSumofNumIndex[i] << endl;
//    }
//
//    cout << "***********************lee code: three sum to a certain number. ****************************" << endl;
//    vector<int> sumArray2 = {-1, 0, 1, 2, -1, -4};
//    vector<vector<int>> reSumofNumIndex2 = threeSum(sumArray2);
//    cout << "the num two integer index is:" << endl;
//    int count2 = reSumofNumIndex.size();
//    for (auto i: reSumofNumIndex2) {
//        cout << "(";
//        for (auto j : i) {
//            cout << j << ",";
//        }
//        cout << ")" << endl;
//
//    }
//
//    cout << "***********************lee code: remove element from array. ****************************" << endl;
//    vector<int> numstest = {1, 2, 3, 5, 7, 8, 9};
//    for (auto i : numstest) {
//
//        cout << i << "-";
//    }
//    cout << endl;
//    int index = removeHyyElement(numstest, 3);
//    cout << "delete element in:" << index << endl;
//
//    cout << "***********************lee code: 分治算法. ****************************" << endl;
//
//    double powResult = myPow().calcPow(3.0, 2);
//    cout << "result of pow: " << powResult << endl;
//    cout << "***********************lee code: 分治算法2. ****************************" << endl;
//
//    double sqrtResult = mySqrt().sqrtfunc(6);
//    cout << "result of sqrt: " << sqrtResult << endl;

//    cout << "***********************lee code: 组合数. ****************************" << endl;
//    cout << "result of permute: " << endl;
//    vector<string> permuteArray = {"a","b","c","d","e"};
//    listPermuteNumbers(permuteArray);
    cout << "***********************lee code: 回溯-子列表. ****************************" << endl;
    cout << "result of sublist: " << endl;
    vector<string> sublist = {"mary","jack","lucy"};
    printSubList(sublist);

    return 0;
}