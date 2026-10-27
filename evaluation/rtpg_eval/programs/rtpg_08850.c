int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 47;
    int v1 = 97;
    int v2 = 96;
    int v3 = 3;
    int v4 = 65;
    int v5 = 71;
    int v6 = 32;
    int i;
    v1 = __helper(v1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
