#pragma once

template <typename T>
ListNode<T> * insert_back(ListNode<T> * head, T val){

    if(head == nullptr)
        return new ListNode(val);
    else
        head->next = insert_back(head->next, val);
        return head;

}
