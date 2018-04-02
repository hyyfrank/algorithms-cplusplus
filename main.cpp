#include <iostream>
#include "acm-icpc/fibonacci.h"
#include "acm-icpc/stack.h"
#include "acm-icpc/queue.h"
#include "acm-icpc/dfs.h"
#include "acm-icpc/dfs2.h"
#include "acm-icpc/quicksort.h"

using namespace std;

int main() {
    // fabnacci calc
    cout << "********************fabnacci function**************************" << endl;
    int num = 10;
    fibonacci(num);
    log(num);
    //basic stack.
    cout << "********************basic stack operation**************************" << endl;
    stackOper();

    cout << "********************basic queue operation**************************" << endl;
    queueOper();

    cout<< "***********************dfs demo****************************"<<endl;
    if(dfs(0,0)){
        cout << "Yes!" << endl;
    } else {
        cout << "No!" << endl;
    }
    cout<< "***********************dfs2 demo****************************"<<endl;
    cout << "number of the pool is: "<< solve() << endl;

    cout<< "***********************quick sort****************************"<<endl;

    vector<int> A = {6,10,13,5,8,3,2,25,4,11};
    int p=0;
    int q=10;

    cout<<"======Original======="<<endl;
    for(auto e: A)
        cout<< e <<" ";
    cout<< endl;

    quickSort(A,p,q);

    cout<<"======Sorted======="<<endl;
    for(auto e: A)
        cout<< e <<" ";
    cout<< endl;

    return 0;
}