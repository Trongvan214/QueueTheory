#include <iostream>
#include "node.hpp"

using namespace std;

Node::Node(void)
{
    //default case
    data.number = 0;
    data.serv_time = 0;
    data.arrival_time = 0;
}
Node::Node(int num,int arr_time,int serv_time);
{
    //set customer data
    data.number = num;
    data.serv_time = serv_time;
    data.arrival_time = serv_time;
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

customer Node::return_data();
{
    //return the letter
    return letter;
}

bool Node::compare_arrive_time(int time);
{
   //compare given time with time in node
   return data.arrival_time == time;
}

void Node::process_data()
{
    //print out the letter
    cout << "Num: " << data.number << endl;
    cout << "Arrive Time: " << data.arrival_time << endl;
    cout << "Service Time: " << data.serv_time << endl;
    
}
