int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 8;
    int v2 = 94;
    int v3 = 10;
    int v4 = 32;
    int v5 = 69;
    int v6 = 78;
    int i;
    if (v4 > v3) { v4 = v3; }
    v1 = 11;
    v4 = v4 + v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    v5 = __arr_didx[__idx_didx[0]];
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
