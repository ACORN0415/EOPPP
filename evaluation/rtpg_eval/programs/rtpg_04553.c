int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 66;
    int v2 = 16;
    int v3 = 26;
    int v4 = 76;
    int v5 = 26;
    int i;
    v1 = v1 + v5;
    for (i = 0; i < 18; i++) {
        v0 = v0 + v2;
    }
    v4 = __arr_didx[__idx_didx[0]];
    v3 = __helper(v3);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
