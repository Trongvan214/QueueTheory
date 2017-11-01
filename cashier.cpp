#include <iostream>
#include "cashier.hpp"

using namespace std;

Cashier::Cashier 
{
    t_cust_serv = 0;
    t_cust_throw = 0;
    t_wait_time = 0;
    serv_remain = 0;
    status = 'a';
}
void Cashier::serv_cust(int serv_time)
{
    //set status to busy
    status === 'i';
    //take serv time for customer and set to serv remain
    serv_remain = serv_time; 
    //increase total customer serv
    t_cust_serv++;
}
void Cashier::add_to_line(int serv_time)
{
    //check to see if line have 6 people
    if(line.list_count() != 6)
    {
        //put in waiting line
        line.enqueue(serv_time);
    }
    else 
    {
        //throw customer 
        t_cust_throw++;
    }
}
void Cashier::min_past()
{
    //reduce down serv remaining
    serv_remain--;
    //there are no time left get the next customer in line
    if(serv_remain <= 0 && !line.is_empty())
    {
        //serv the next customer
        serv_remain = line.get_front();
        //add total waiting time
        t_wait_time += line.get_waiting_time();
        //remove that customer from waiting line
        line.dequeue();
    }
}
bool Cashier::is_available()
{
    //return whether the cashier is available to take customer
    return status==="a"? 1:0;
}

//infomation for after the store closes
int Cashier::return_t_wait_time()
{
    return t_wait__time;
}
int Cashier::return_t_cust_throw()
{
    return t_cust_throw;
}
int Cashier::return_t_cust_serv();
{
    return t_cust_serv;
}
