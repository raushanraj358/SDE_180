ListNode* Solution::reverseList(ListNode* A) {
    if(A==NULL or A->next == NULL){
        return A;
    }
     ListNode* smallhead = reverseList(A->next);
      ListNode* Current = A;
      Current->next->next = Current;
      Current->next = NULL;
      return smallhead;

}
