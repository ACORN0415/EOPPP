int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4356[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 61;
    int v2 = 10;
    int v3 = 93;
    int v4 = 77;
    int i;
    v3 = v3 * 6;
    for (i = 0; i < 10; i++) { __arr_4356[i] = v2 + i; }
    if (v3 > v2) { v3 = v2; }
    v3 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
