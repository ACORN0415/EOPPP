int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 95;
    int v1 = 68;
    int v2 = 33;
    int v3 = 39;
    int v4 = 47;
    int v5 = 78;
    int v6 = 43;
    int v7 = 19;
    int i;
    v7 = v7 - v1;
    v6 = 80;
    for (i = 0; i < 13; i++) {
        v4 = v4 + v0;
    }
    v5 = __helper(v5);
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
