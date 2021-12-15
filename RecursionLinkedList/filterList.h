#pragma once


// filterList( 8-> 6-> 4->3->2->nullptr , [](int x){ return x < 4;} ) ==
// 3->2->nullptr

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
