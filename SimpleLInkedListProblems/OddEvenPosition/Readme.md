# Posições pares e ímpares

Dado o nó cabeça de uma lista encadeada simples, agrupe todos os nós com índices ímpares seguidos pelos nós com índices pares e retorne a lista reordenada.

O primeiro nó é considerado ímpar e o segundo nó é par e assim por diante.

Observe que a ordem relativa dentro dos grupos pares e ímpares deve permanecer como estava na entrada.

Você deve resolver o problema em $\mathcal{O} (1)$ complexidade de espaço extra e complexidade de tempo $\mathcal{O}(n)$.

Exemplo:

![Exemplo1](https://assets.leetcode.com/uploads/2021/03/10/oddeven2-linked-list.jpg)

Entrada:  head = [2,1,3,5,6,4,7]
Saída: [2,3,6,7,1,5,4]


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

ListNode* oddEvenList(ListNode* head) 
{
    
        
        
        
        
        
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

    head = oddEvenList(head);

    for(ListNode * ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->val << endl;
    
    return 0;    
}
```


