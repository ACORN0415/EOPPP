int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 53;
    int v1 = 95;
    int v2 = 32;
    int v3 = 4;
    int v4 = 38;
    int v5 = 100;
    int v6 = 14;
    int i;
    if (v5 > v3) { v5 = v3; }
    v0 = 81;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
