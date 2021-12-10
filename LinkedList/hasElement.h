#pragma once

template <typename T>
bool hasElement(ListNode<T> * head, T x){

    if(head == nullptr)
        return false;
    else if( head->val == x) 
        return true;
    else
        return hasElement(head->next, x);

}
