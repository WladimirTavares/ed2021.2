# Merge duas listas encadeadas ordenadas

Dado duas cabeças de duas listas encadeadas ordenadas, list1 e list2.

Mescle as duas listas em uma única lista ordenada. 

Retorne a cabeça da lista encadeada mesclada.

Exemplo:

![Exemplo1](https://assets.leetcode.com/uploads/2020/10/03/merge_ex1.jpg)

Entrada:  list1 = [1,2,4], list2 = [1,3,4]
Saída: [1,1,2,3,4,4]




```C++
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class ListNode {
    public:

    int val;
    ListNode *next;
    
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {} 
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    
}

ListNode* readList(){
    int n;
    cin >> n;
    ListNode * head;
    for(int i = 0; i < n; i++){
        ListNode * ptr;
        int x;
        cin >> x;
        if( i == 0){
            head = new ListNode(x);
            ptr = head;
        }else{
            ptr->next = new ListNode(x, nullptr);
            ptr = ptr->next;
        }
    }

    return head;

}


int main(){
    
    ListNode * list1 = readList();
    ListNode * list2 = readList();
    ListNode * head = mergeTwoLists(list1, list2);

    for(ListNode * ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->val << endl;
    
    return 0;    
}



```


