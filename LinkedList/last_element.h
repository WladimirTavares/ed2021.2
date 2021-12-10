#pragma once

#include <stdexcept>


//return the last item of a list
template <typename T> 
T last(ListNode<T> * head){

    if(head == nullptr)
         throw std::runtime_error("empty list");

    if( head->next == nullptr )
        return head->val;
    else
        return last(head->next);

}