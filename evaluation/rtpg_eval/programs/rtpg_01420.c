int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 92;
    int v1 = 38;
    int v2 = 31;
    int v3 = 70;
    int i;
    v3 = 30;
    v2 = __helper(v2);
    int *__p = &v2;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
