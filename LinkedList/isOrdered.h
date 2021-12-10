#pragma once

template <typename T>
bool isOrdered(ListNode<T> * head)
{
    //tamanho 0
    if(head == nullptr)
        return true;

    //tamanho 1
    if(head->next == nullptr)
        return true;


    return head->val < head->next->val && isOrdered(head->next);

}
