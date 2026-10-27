int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 5;
    int v1 = 35;
    int v2 = 30;
    int v3 = 80;
    int v4 = 26;
    int v5 = 68;
    int v6 = 33;
    int i;
    v0 = v0 * 9;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
