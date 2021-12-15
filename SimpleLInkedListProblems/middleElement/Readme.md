# Encontre o elemento do meio de uma lista encadeada

Dada uma lista encadeada de N nós. A tarefa é encontrar o meio da lista encadeada. Por exemplo, se a lista encadeada for
1-> 2-> 3-> 4-> 5, então o nó do meio da lista é 3
Se houver dois nós do meio (no caso, quando N for par), imprima o segundo elemento do meio.
Por exemplo, se a lista encadeada dada for 1-> 2-> 3-> 4-> 5-> 6, então o nó do meio da lista é 4.


**Exemplo 1:**

**Entrada:**
```
1->2->3->4->5
```
**Saída**
```
3
```





**Exemplo 2:**

**Entrada:**
```
1->2->3->4->5->6
```
**Saída**
```
4
```


Dica: Use dois ponteiros, ou seja, slow e fast. Comece os dois ponteiros apontando para o nó cabeça. O ponteiro fast se moverá com o  dobro da velocidade do ponteiro slow até chegar ao fim da lista encadeada. Assim que o ponteiro fast chegar ao fim, nosso ponteiro slow estará no elemento do meio.





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


int getMiddle(ListNode *head)
{
        
            
}




int main(){
    
    ListNode * head = readList();
    
    cout << getMiddle(head) << endl;

    
    return 0;    
}




```


