#pragma once

template <typename T>
ListNode<T> * insert_front(ListNode<T> *  head, T val){
    return new ListNode(val, head);
}
