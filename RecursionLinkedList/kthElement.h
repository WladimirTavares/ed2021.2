#pragma once

template <typename T> 
T kthElement(ListNode<T> * head, int k)
{

    if(head == nullptr)
        throw std::runtime_error("out of range");
    else if(k == 0)
        return head->val;
    else
        return kthElement(head->next, k-1);


}