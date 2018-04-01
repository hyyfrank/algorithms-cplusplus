#include <iostream>
#include "acm-icpc/fibonacci.h"
#include "acm-icpc/stack.h"
#include "acm-icpc/queue.h"

using namespace std;
int main() {
    // fabnacci calc
    cout << "**************fabnacci function********************" << endl;
    int num = 10;
    fibonacci(num);
    log(num);
    //basic stack.
    cout << "**************basic stack operation********************" << endl;
    stackOper();

    cout << "**************basic queue operation********************" << endl;
    queueOper();


    return 0;
}