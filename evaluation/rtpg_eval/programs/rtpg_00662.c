int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_662[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 30;
    int v2 = 67;
    int i;
    for (i = 0; i < 10; i++) { __arr_662[i] = v0 + i; }
    v1 = 5;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
