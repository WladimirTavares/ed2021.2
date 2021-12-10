#pragma once

#include <functional>
template <typename T>
ListNode <T> * filterList(ListNode<T> * head, function <bool (T)> pred ){

    if(head == nullptr)
        return nullptr;
    else{

        if( pred(head->val) )
            return new ListNode(head->val, filterList(head->next, pred) ); 
        else
            return filterList(head->next, pred);

    }
}