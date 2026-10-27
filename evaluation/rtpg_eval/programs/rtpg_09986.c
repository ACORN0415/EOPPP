int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 72;
    int v1 = 89;
    int v2 = 37;
    int v3 = 13;
    int v4 = 5;
    int v5 = 5;
    int v6 = 83;
    int v7 = 88;
    int i;
    v7 = v7 * 7;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
