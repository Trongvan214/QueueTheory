#ifndef node_hpp
#define node_hpp

using namespace std;

class Node 
{
    int cust_serv_time
    int waiting_time;
    Node* next;
    public: 
        Node(void);
        Node(int serv_time);
        void change_pointer(Node *next_ptr);
        Node* return_next();
        int return_serv_time();
        void process_data(); 
        void increase_wait_time();
        int return_wait_time();
        
};
#endif
