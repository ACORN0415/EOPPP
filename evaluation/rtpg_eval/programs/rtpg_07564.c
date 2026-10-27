int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7564[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 67;
    int v2 = 40;
    int v3 = 19;
    int v4 = 38;
    int i;
    if (v0 > v0) { v0 = v0; }
    for (i = 0; i < 10; i++) { __arr_7564[i] = v3 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
