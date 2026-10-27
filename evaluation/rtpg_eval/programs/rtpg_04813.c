int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 28;
    int v1 = 100;
    int v2 = 64;
    int v3 = 56;
    int v4 = 77;
    int v5 = 10;
    int i;
    if (v2 > v0) { v2 = v0; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
