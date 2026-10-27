int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 54;
    int v1 = 17;
    int v2 = 14;
    int v3 = 59;
    int v4 = 99;
    int i;
    v0 = v0 + v0;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v4;
    }
    int *__p = &v4;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
