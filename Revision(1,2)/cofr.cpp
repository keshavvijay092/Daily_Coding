class Solution {
  public:
    // task is to complete this function
    // function should return head to the list after making
    // necessary arrangements
    struct Node* arrangeCV(Node* head) {
        //   a -> b -> c -> d -> e -> f -> g -> h -> i 
        //       i     
        //                       j   
           
        // //   i aur j ko replacable constant kar rakho 
        // // kya i par vow hai agar hai toh i++ kar do ji
        // // kya i par vowel hai nhi ji toh stop kar do ji usko 
        // // j++ karte jao jab tak vow na mile jab he vowel mile toh 
        // // node jispar i tha usko aage kar do  kar do node jispar j hai 
        // a -> e -> b -> c -> d -> f -> g -> h -> i
        //  i                                      j
        //         //   ab fir se j ek vowel par aagya hai 
        //         // toh jidhar bhi b haina usko shift kar ka j dal do ji 
        // a -> e -> i -> b -> c -> d -> f -> g -> h 
        
    //   a b c d e f g h i 
    //   i       j  
    //         p z
    
    //  a->e
    // d->f->b
        Node* i = head;
        Node* j = head->next;
        Node* p = head;
        Node* z = j;
        Node* x = NULL;
        int flag = 0;
        while(j !=NULL )
        {
            if(j->data == 'a' || j->data == 'e' || j->data == 'o'|| j->data == 'i' || j->data == 'u' )
            {
                if(flag == 0)
                {
                    head = j;
                    flag++;
                }
                z = j;
                x = i->next;
              x = z;
              p->next = z->next;
              
              z->next = x;
              
              i = i->next;
              j = j->next;
              p = p->next;
              
            }
            else
            {
                j = j->next;
                p = p->next;
            }
        }
        
    return head;
    }
};