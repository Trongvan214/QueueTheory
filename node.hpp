#ifndef node_hpp
#define node_hpp

using namespace std;

struct customer 
{
    int number;
    int arrival_time;
    int serv_time;
};
class Node 
{
    customer data;
    Node* next;
    public: 
        Node(void);
        Node(int num,int arr_time,int serv_time);
        void change_pointer(Node *next_ptr);
        Node* return_next();
        customer return_data();
        bool compare_arrive_time(int time);
        void process_data(); 
        
};
#endif
