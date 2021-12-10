#pragma once

template <typename T>
ListNode<T> * removeElement(ListNode<T> * head, T x)
{
    if(head==nullptr)
        return nullptr;
    else
        if(head->val == x){
            auto ptr = head->next;
            delete head;
            return removeElement(ptr, x);
        }else{
            head->next = removeElement(head->next, x);
            return head;
        }
}
