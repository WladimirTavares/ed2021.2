#pragma once

template <typename T>
ListNode<T> * remove_back(ListNode<T> * head){
    
    if(head == nullptr)
        throw std::runtime_error("empty list");
    else if( head->next == nullptr  ){
        delete head;
        return nullptr;
    }else{
        head->next = remove_back(head->next);
        return head;
    }

}
