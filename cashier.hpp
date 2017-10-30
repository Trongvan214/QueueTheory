#ifndef __CASHIER__
#define __CASHIER__

#include "queue.hpp" 

class Customer 
{
    int number;
    int arrival_time;
    int serv_time;
};

class Cashier 
{
    Queue line;
    //  in use 
    int timer;
    //a for available, i for inactive
    char status;
    //depends on customers serv_time
    int timeLimit;
    public: 
        Cashier(void);
        void addCustomer(int num,int arr_time,int serv_time);
        void removeCustomer();
        int totalWaitCustomer();
        int remainServTime();
        char current_status();
};


#endif
