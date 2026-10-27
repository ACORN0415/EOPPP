int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 24;
    int v1 = 24;
    int v2 = 40;
    int v3 = 99;
    int v4 = 1;
    int v5 = 38;
    int v6 = 88;
    int i;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v0;
    }
    v3 = 29;
    v5 = v5 - v0;
    v6 = __helper(v6);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
