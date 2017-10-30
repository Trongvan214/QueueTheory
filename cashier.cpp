#include <iostream>
#include "cashier.hpp"

using namespace std;

Cashier::Cashier 
{
    timer = 0;
    timeLimit = 0;
    status = 'a';
}

void Cashier::addCustomer(int num,int arr_time,int serv_time)
{
    //if cashier avail. than work 
    if(status == 'a')
    {
        status == 'i';
        timeLimit = serv_time;
    }
    //or put in line
    else if(line.list_count() != 6)
    {
        line.enqueue(num,arr_time,serv_time);
    }
}
