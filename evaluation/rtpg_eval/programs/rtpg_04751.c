int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 78;
    int v1 = 15;
    int v2 = 45;
    int v3 = 13;
    int v4 = 35;
    int v5 = 3;
    int v6 = 52;
    int i;
    v6 = 89;
    v0 = __helper(v0);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
