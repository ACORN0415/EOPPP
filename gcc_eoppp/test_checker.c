struct Node { 
    int data; 
    struct Node *next; 
};

int check_memory_failure(struct Node *p) {
    // volatile 포인터를 사용하여 최적화 삭제를 방지
    struct Node * volatile next_node;
    next_node = p->next; 
    
    int result = next_node->data; // Chasing 발생
    return result; 
}