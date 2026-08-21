/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr) return nullptr;
        unordered_map<Node*,Node*>m;
        Node*newHead = new Node(head->val);
        Node*otemp = head->next;
        Node*ntemp = newHead;
        m[head] = newHead;

        while(otemp!=NULL){
            Node*copyNode = new Node(otemp->val);
            m[otemp] = copyNode;
            ntemp->next = copyNode;
            otemp = otemp->next;
            ntemp= ntemp->next;
        }

        otemp = head;
        ntemp= newHead;
        while(otemp!=NULL){
            ntemp->random = m[otemp->random];
            otemp = otemp->next;
            ntemp=ntemp->next;
        }
        return newHead;
    }
};
