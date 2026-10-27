int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 35;
    int v1 = 71;
    int v2 = 93;
    int v3 = 100;
    int i;
    v0 = v0 - v2;
    v2 = 2;
    v3 = __helper(v3);
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
