int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 32;
    int v1 = 43;
    int v2 = 10;
    int v3 = 22;
    int v4 = 26;
    int v5 = 83;
    int v6 = 1;
    int v7 = 47;
    int i;
    v6 = 20;
    v0 = __helper(v0);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
