/*
* @Author: zhanmingming
* @Date:   2019-10-04 18:52:35
* @Last Modified by:   zhanmingming
* @Last Modified time: 2019-11-11 00:08:20
*/
#include <iostream>
#include <thread>
#include"CyclicBarrier.h"

using namespace empool;

CyclicBarrier barrier(2);

void doWork()
{
    barrier.Await();
    std::cout << "thread1 common" << std::endl;
}

// int main()
// {
//     // CyclicBarrier barrier(2);
//     std::thread th1(doWork);
//     std::thread th2(doWork);

//     th1.join();
//     th2.join();

// }