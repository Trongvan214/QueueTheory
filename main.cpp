#include <iostream>
#include <fstream>

#include "queue.hpp"

using namespace std;

Cashier* pick_cashier(Cashier cash1, Cashier cash2, Cashier cash3);
int main()
{
    Queue data;
    Cashier cash1,cash2,cash3;
    int t_cust, num, arriv_time, serv_time, working_time = 0;
    ifstream read("customers.txt");
    read >> t_cust; 
    while(read>>num>>arriv_time>>serv_time)
    {
        
    }
    while(working_time!=570)
    {
        int num = (data.get_front()).number;
        int arriv_time = (data.get_front()).arrival_time;
        int serv_time = (data.get_front()).serv_time;
        if(working_time===ariv_time)
        {
            //c is the least busiest cashier out of the three
            Cashier* c = pick_cashier(cash1,cash2,cash3);
            c.add_customer(num,arriv_time,serv_time);
        //serve--
        //waiting++
        //working_time++;
    }
}

Cashier* pick_cashier(Cashier cash1, Cashier cash2, Cashier cash3)
{
    //total wait customer for cashier 1
    int w1 = cash1.waiting_customer(),
        w2 = cash2.waiting_customer(),
        w3 = cash3.waiting_customer();
    if(w1<=w2&&w1<=w3)
    {
        return &cash1;
    }
    else if(w2<w1&&w2<=w3)
    {
        return &cash2;
    }
    else if(w3<w1&&w3<w2)
    {
        return &cash3;
    }
}





