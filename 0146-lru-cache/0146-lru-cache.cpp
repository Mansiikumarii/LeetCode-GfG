class Node{
    public:
        int key,val;
        Node* next,*prev;
        Node(int key,int value){
            this->key = key;
            this->val = value;
            next = NULL;
            prev = NULL;
        }
};
class LRUCache {
public:
    int capacity;
    unordered_map<int,Node*> mp;
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    LRUCache(int capacity) {
        this->capacity = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    void deleteNode(Node* node){
        Node* a = node->prev;
        Node* b = node->next;
        a->next = b;
        b->prev = a;
    }

    void addNode(Node* node){
        Node* a = head->next;
        head->next = node;
        node->prev = head;
        node->next = a;
        a->prev = node;
    }

    int get(int key) {
        if(mp.find(key)==mp.end()){
            return -1;
        }
        Node* node = mp[key];
        deleteNode(node);
        addNode(node);
        mp[key] = head->next;
        return mp[key]->val;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            Node* node = mp[key];
            deleteNode(node);
            node->val = value;
            addNode(node);
            mp[key] = head->next; 
        }
        else{
            if(mp.size()==capacity){
                Node* a = tail->prev; 
                deleteNode(a);
                Node* b = new Node(key,value);
                addNode(b);
                mp.erase(a->key);
                mp[key] = head->next;
            }
            else{
                Node* a = new Node(key,value);
                addNode(a);
                mp[key] = head->next;
            }
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */