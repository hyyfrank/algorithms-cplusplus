//
// Created by mac on 2018/4/1.
//
#include <iostream>
#include <queue>
#include "queue.h"
using namespace std;

void queueOper(){
    queue<int> que;
    cout << "item in queue: "<< 1 << endl;
    que.push(1);
    cout << "item in queue: "<< 2 << endl;
    que.push(2);
    cout << "item in queue: "<< 3 << endl;
    que.push(3);
    cout << "access queue from top: " << que.front() << endl;
    que.pop();
    cout << "access queue from top: " << que.front() << endl;
    que.pop();
    cout << "access queue from top: " << que.front() << endl;
    que.pop();
}
