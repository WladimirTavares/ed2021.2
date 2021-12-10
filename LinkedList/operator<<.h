#pragma once

template <typename T>
ostream& operator<<(ostream &output, ListNode<T> * head)
{
    if( head==nullptr )
    {
        output << "nullptr";    
    }
    else
    {
        output << head->val << " -> " << head->next;
    }
    
    return output;
}
