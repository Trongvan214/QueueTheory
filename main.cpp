#include <iostream>
#include <fstream>

#include "queue.hpp"

using namespace std;

Queue* pick_cashier(Queue* cash1, Queue* cash2, Queue* cash3);

int main()
{
    Queue cash1,cash2,cash3;
    int t_cust, 
        cust_num, 
        arriv_time, 
        serv_time, 
        t_cust_serv,
        t_cust_throw,
        t_wait_time,
        working_time = 0;
    ifstream read("customers.txt");
    read >> t_cust; 
    read>>cust_num>>arriv_time>>serv_time;
    while(working_time!=570)
    {
        //c is the least busiest cashier out of the three
        Queue* c = pick_cashier(&cash1,&cash2,&cash3);
        //if not 30 min before closing (accept customer)
        if(working_time!=540)
        {
            if(working_time == arriv_time)
            {

                c->enqueue(arriv_time,serv_time);
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
    //total up all 3 cashier total throw
    t_cust_throw+=cash1.r_cust_throw()
                +cash2.r_cust_throw()
                +cash3.r_cust_throw();
    t_cust_serv=cash1.r_cust_serv()+cash2.r_cust_serv()+cash3.r_cust_serv();
    t_wait_time=cash1.r_wait_time()+cash2.r_wait_time()+cash3.r_wait_time();
    int avg_wait = t_cust_serv/t_wait_time;
    cout << avg_wait << endl;
}

Queue* pick_cashier(Queue* cash1, Queue* cash2, Queue* cash3)
{
    //total wait customer for cashier
    int w1 = cash1->list_count(),
        w2 = cash2->list_count(),
        w3 = cash3->list_count();
    if(w1<=w2&&w1<=w3)
    {
        return cash1;
    }
    else if(w2<w1&&w2<=w3)
    {
        return cash2;
    }
    else if(w3<w1&&w3<w2)
    {
        return cash3;
    }
    return 0;
}





