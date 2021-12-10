#pragma once

template <typename T>
T getNthFromLast(ListNode<T> *head, int n){
    ListNode<T> * slow = head;
    ListNode<T> * fast = head;
    
    for(int i = 1; i <= n; i++){ 
        if(fast == nullptr)
            throw std::runtime_error("out of range");    
        fast = fast->next;
    }

    while(fast != nullptr){
        slow = slow->next;
        fast = fast->next;
    }

    return slow->val;
    
}

