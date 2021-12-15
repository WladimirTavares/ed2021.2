#pragma once

#include <iostream>
#include <functional>


using namespace std;

namespace ed{

template <typename T> 
class List;

template <typename T> 
class List{
    private:
        class Node;
        Node * head;
        Node * past_last;
        int count;
    public:        
        class Iterator;
        List();
        int size();
        void insert_front(T x);
        void insert_back(T x);
        void remove_front();
        void remove_back();
        T & front();
        T & back();
        auto begin();
        auto end();
        void insert_before(Iterator it, T x);
        void erase_before(Iterator it);

        //void selection_sort();
        //void insertSorted(T x);
        //void remove(T x);
        //void insertion_sort()
        //void merge();
        //void reverse();
        //void rotateList(int p);
};

# include "node_implementation.h"
# include "iterator_implementation.h"



template <typename T> 
List<T>::List(){
    head = new Node();
    past_last = new Node();
    head->next = past_last;
    past_last->prev = head;
    this->count = 0;
}

template <typename T> 
int List<T>::size()
{
    return this->count;
}

template <typename T> 
T & List<T>::front()
{
    return head->next->val;
}

template <typename T> 
T & List<T>::back()
{
    return past_last->prev->val;
}

template <typename T> 
void List<T>::remove_front(){
    if(count > 0){
        auto ptr = head->next;
        head->next = ptr->next;
        ptr->next->prev = head;
        delete ptr;
        this->count--;
    }
}

template <typename T> 
void List<T>::remove_back(){
    
    if(count > 0){
        auto last = past_last->prev;
        past_last->prev = last->prev;
        last->prev->next = past_last;
        delete last;
        this->count--;
    }
}


template <typename T> 
void List<T>::insert_front(T x){
    auto ptr = new Node(x, head, head->next);
    head->next->prev = ptr;
    head->next = ptr;
    this->count++;
}


template <typename T> 
void List<T>::insert_back(T x){
    auto ptr = new Node(x, past_last->prev, past_last);
    past_last->prev->next = ptr;
    past_last->prev = ptr;
    this->count++;
}

template <typename T> 
void List<T>::insert_before(Iterator it, T x){
    it.insert_before(x);
    this->count++;
}

template <typename T> 
void List<T>::erase_before(Iterator it){
    if( it != begin() ){
        it.erase_before();
        count--;
    }
}

template <typename T> 
auto List<T>::begin()
{
    return Iterator(head->next);
}

template <typename T> 
auto List<T>::end()
{
    return Iterator(past_last);
}



template <typename T>
ostream& operator<<(ostream &output, List<T>& l)
{
    output << "[";
    for(auto it = l.begin(); it != l.end(); it = it.next() ){
        if( it != l.begin() ) cout << " ";
        cout << it.value();
    }

    output << "]";
    return output;
}



} // namespace ed
