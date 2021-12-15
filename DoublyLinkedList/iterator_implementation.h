#pragma once

template <typename T> 
class List<T>::Iterator{
    private:
        Node *atual;
    public:
        Iterator() : atual(nullptr){}
        Iterator(Node * atual) : atual(atual){ }
        Iterator next(){ return Iterator( atual->next); }
        T & value() { return atual->val; }
        bool operator!=(const Iterator & other) const{
            return atual != other.atual;
        }

        void insert_before(T x)
        {
            auto ptr = new Node(x, atual->prev, atual);
            atual->prev->next = ptr;
            atual->prev = ptr;
        }

        void erase_before()
        {
            auto ptr = atual->prev;

            ptr->prev->next = atual;
            atual->prev = ptr->prev;

            delete ptr;

        }
};
