#pragma once

//#include <functional>
template <typename A, typename B> 
ListNode <B> * mapList(ListNode<A> * head, function <B (A)> f){

    if(head == nullptr)
        return nullptr;
    else
        return new ListNode( f(head->val), mapList(head->next, f) );
}

