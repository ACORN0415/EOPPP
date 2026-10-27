int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 95;
    int v1 = 46;
    int v2 = 69;
    int v3 = 75;
    int v4 = 22;
    int v5 = 32;
    int v6 = 1;
    int v7 = 26;
    int i;
    v3 = v3 * 4;
    v7 = __helper(v7);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
