int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 70;
    int v1 = 43;
    int v2 = 97;
    int v3 = 19;
    int v4 = 78;
    int v5 = 43;
    int i;
    v2 = __helper(v2);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
