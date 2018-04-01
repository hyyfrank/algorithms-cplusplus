//
// Created by mac on 2018/4/1.
//

#include <iostream>
#include "stack.h"
#include "stack"

using namespace std;

void stackOper(){
    stack<int> s;
    cout << "push item:"<< 1 << endl;
    s.push(1);
    cout << "push item:"<< 2 << endl;
    s.push(2);
    cout << "push item:"<< 3 << endl;
    s.push(3);
    cout << "get stack item from top:" << s.top() << endl;
    s.pop();
    cout << "get stack item from top:" << s.top() << endl;
    s.pop();
    cout << "get stack item from top:" << s.top() << endl;
    s.pop();


}