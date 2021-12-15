#pragma once

template <typename T> 
class List<T>::Node{
    public:
    T val;
    Node * next;
    Node * prev;
    Node() : next(nullptr), prev(nullptr){}
    Node(T val) : next(nullptr), prev(nullptr){}
    Node(T val, Node * prev, Node * next) : val(val), prev(prev), next(next) {}    
};

