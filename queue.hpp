#ifndef __QUEUE__
#define __QUEUE__

#include "node.hpp"

class Queue 
{
    Node *front, *rear, *temp;
    int len;
    public:
        Queue(void);
        void enqueue(int serv_time);
        bool dequeue();
        int get_front();
        int get_rear();
        bool is_empty();
        int list_count();
        int get_waiting_time();
        void all_increase_wait_time();
    
};
#endif
