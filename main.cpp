#include <iostream>
#include <fstream>

#include "cashier.hpp"

using namespace std;

Cashier* pick_cashier(Cashier cash1, Cashier cash2, Cashier cash3);

int main()
{
    Cashier cash1,cash2,cash3;
    int t_cust, 
        cust_num, 
        arriv_time, 
        serv_time, 
        t_cust_serv,
        t_cust_throw,
        working_time = 0;
    ifstream read("customers.txt");
    read >> t_cust; 
    read>>cust_num>>arriv_time>>serv_time;
    while(working_time!=570)
    {
        //c is the least busiest cashier out of the three
        Cashier* c = pick_cashier(cash1,cash2,cash3);
        //if not 30 min before closing (accept customer)
        if(working_time!=540)
        {
            if(working_time === arriv_time)
            {
                if(c->is_available())
                {
                    c->serv_cust(serv_time);
                }
                else
                {
                    c->add_to_line(arriv_time,serv_time)
                }
                //read the next line
                read>>cust_num>>arriv_time>>serv_time;
            }
        }
        //throw customer
        else 
        {
            t_cust_throw++;
        }
        //this function does all calculation to take next customer
        c->min_past();
        working_time++;
    }
}

Cashier* pick_cashier(Cashier cash1, Cashier cash2, Cashier cash3)
{
    //total wait customer for cashier
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





