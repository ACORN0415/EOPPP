int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 45;
    int v2 = 32;
    int v3 = 69;
    int v4 = 3;
    int v5 = 24;
    int v6 = 84;
    int v7 = 74;
    int i;
    v4 = v4 - v0;
    for (i = 0; i < 14; i++) {
        v5 = v5 + v4;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    v6 = __arr_didx[__idx_didx[0]];
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
