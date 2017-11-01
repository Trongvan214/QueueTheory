#include <iostream>
#include "node.hpp"

using namespace std;

Node::Node(void)
{
    //default case
    cust_serv_time = 0;
    waiting__time = 0;
}
Node::Node(int serv_time)
{
    //set customer data
    cust_serv_time = serv_time;
    waiting__time = 0;
}
void Node::change_pointer(Node* next_ptr)
{
    //change pointer
    next = next_ptr;
}

Node* Node::return_next()
{
    //return this ptr link
    return next;
}

int Node::return_serv_time()
{
    return cust_serv_time;
}
void Node::process_data()
{
    //print out the letter
    cout << "Customer serve time " << cust_serv_time << endl;
    
}
void Node::increase_wait_time()
{
    waiting_time+=1;
}
int Node::return_wait_time()
{
    return waiting_time;
}
