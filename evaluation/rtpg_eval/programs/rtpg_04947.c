int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4947[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 62;
    int v2 = 42;
    int v3 = 34;
    int v4 = 7;
    int v5 = 16;
    int v6 = 24;
    int v7 = 9;
    int i;
    for (i = 0; i < 10; i++) { __arr_4947[i] = v5 + i; }
    v4 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
