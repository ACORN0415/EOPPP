int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 78;
    int v1 = 46;
    int v2 = 92;
    int v3 = 31;
    int v4 = 63;
    int v5 = 56;
    int v6 = 50;
    int v7 = 87;
    int i;
    v4 = v4 * 9;
    v7 = __helper(v7);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
