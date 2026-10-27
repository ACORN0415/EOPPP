int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 60;
    int v1 = 25;
    int v2 = 73;
    int v3 = 33;
    int v4 = 49;
    int v5 = 13;
    int v6 = 88;
    int v7 = 28;
    int i;
    v5 = v5 * 5;
    v0 = 48;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v5 = __helper(v5);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
