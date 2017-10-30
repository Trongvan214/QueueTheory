#ifndef __QUEUE__
#define __QUEUE__

#include "node.hpp"

class Queue 
{
    Node *front, *rear, *temp;
    int len;
    public:
        Queue(void);
        void enqueue(int num,int arr_time,int serv_time);
        bool dequeue();
        customer get_front();
        customer get_rear();
        bool is_empty();
        int list_count();
    
};
#endif
