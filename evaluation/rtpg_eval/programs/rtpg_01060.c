int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 8;
    int v2 = 44;
    int v3 = 75;
    int i;
    v1 = v1 + v3;
    if (v1 > v3) { v1 = v3; }
    v2 = __arr_didx[__idx_didx[0]];
    v0 = __helper(v0);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
