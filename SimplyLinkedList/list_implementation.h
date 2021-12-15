#pragma once


template <typename T> 
T & List<T>::front()
{
    return head->next->val;
}


template <typename T> 
typename List<T>::Iterator List<T>::begin()
{
    return Iterator(head->next);
}

template <typename T> 
typename List<T>::Iterator List<T>::before_begin()
{
    return Iterator(head);
}

template <typename T> 
typename List<T>::Iterator List<T>::end()
{
    return Iterator(past_last);
}

template <typename T> 
void List<T>::pop_front(){
    if(count > 0){

        Node * ptr = head->next;
        head->next = head->next->next;
        count--;
        delete ptr;
    }
}

template <typename T> 
void List<T>::insert_front(T val)
{
    Node * ptr = new Node(val, head->next);
    head->next = ptr;
    count++;   
}


template <typename T> 
void List<T>::insert_after(Iterator it, T val)
{
    it.insert_after(val);
}


template <typename T> 
void List<T>::erase_after(Iterator it)
{
    it.erase_after();
}


