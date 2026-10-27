int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 78;
    int v1 = 49;
    int v2 = 34;
    int v3 = 8;
    int i;
    if (v0 > v3) { v0 = v3; }
    v3 = v3 + v1;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v1;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v1 = __helper(v1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
