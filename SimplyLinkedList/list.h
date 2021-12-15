#pragma once

#include <iostream>
#include <functional>


using namespace std;

namespace ed{

template <typename T> 
class List{
    private:
        class Node;
        Node * head;
        Node * past_last;
        int count;
    public:        
        class Iterator;
        List() : count(0) { 
            head = new Node();
            past_last = new Node();
            head->next = past_last;
        }
        ~List(){   
            
        }    

        


        int size() { return count; }
        
        Iterator begin();
        Iterator before_begin();
        Iterator end();

        void pop_front();
        void insert_front(T val);
        T & front();

        void insert_after(Iterator it, T val); 
        void erase_after(Iterator it);

        

};

#include "node_implementation.h"
#include "list_implementation.h"
#include "iterator_implementation.h"


}

