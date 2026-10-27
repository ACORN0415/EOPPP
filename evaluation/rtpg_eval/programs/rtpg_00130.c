int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 42;
    int v1 = 31;
    int v2 = 15;
    int v3 = 85;
    int v4 = 11;
    int v5 = 44;
    int v6 = 38;
    int v7 = 79;
    int i;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v6;
    }
    v1 = 6;
    int *__p = &v5;
    *__p = *__p + 1;
    v1 = __helper(v1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
