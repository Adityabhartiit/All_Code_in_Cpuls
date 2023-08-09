 bool detectLoop(Node* head)
    {
        if(head == NULL) return false;
        if(head->next == head) return true;
        Node * slow = head;
        Node * fast = head;
        while(fast!=NULL && fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false;
    }
    void removeLoop(Node* head)
    {
        bool flag = detectLoop(head);
        if(flag == true) {
            unordered_set<Node *> st;
            Node * curr = head;
            while(true) {
                st.insert(curr);
                if(st.find(curr->next)!=st.end()) {
                    curr->next = NULL;
                    return;
                }
                curr = curr->next;
            }
        }
        else {
            return;
        }
    }