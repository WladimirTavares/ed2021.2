#pragma once

template <typename T>
ListNode<T> * remove_front(ListNode<T> * head){

    if(head == nullptr)
        throw std::runtime_error("empty list");
    else{
        delete exchange(head, head->next);
        return head;
    }
}
