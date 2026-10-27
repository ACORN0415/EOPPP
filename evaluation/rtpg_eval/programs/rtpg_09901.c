int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 65;
    int v1 = 12;
    int v2 = 85;
    int v3 = 75;
    int i;
    if (v2 > v0) { v2 = v0; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    int *__p = &v3;
    *__p = *__p + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
