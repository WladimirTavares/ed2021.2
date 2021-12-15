# Remove Elementos duplicados consecutivos

Dado o nó cabeça de uma lista encadeada simples ordenada, exclua todas os valores duplicados de forma que cada elemento apareça apenas uma vez devolvendo uma lista encadeada também.

Exemplo:

![Exemplo1](https://assets.leetcode.com/uploads/2021/01/04/list1.jpg)

Entrada: head = [1,1,2] 
Saída: [1,2]


Exemplo:

![Exemplo2](https://assets.leetcode.com/uploads/2021/01/04/list2.jpg)


Entrada: head = [1,1,2,3,3]
Saída: [1,2,3]

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

ListNode* deleteDuplicates(ListNode* head) {
        
        
}

int main(){
    int n;
    ListNode * head= nullptr;
    cin >> n;
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

    deleteDuplicates(head);

    for(ListNode * ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->val << endl;
    
    return 0;    
}

```


