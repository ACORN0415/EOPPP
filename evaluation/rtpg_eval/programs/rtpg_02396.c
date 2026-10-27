int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 31;
    int v2 = 91;
    int v3 = 50;
    int v4 = 13;
    int i;
    v2 = v2 + v4;
    if (v2 > v3) { v2 = v3; }
    v2 = __helper(v2);
    v0 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
