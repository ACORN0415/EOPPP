int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 49;
    int v1 = 51;
    int v2 = 9;
    int v3 = 72;
    int v4 = 100;
    int v5 = 80;
    int v6 = 39;
    int i;
    v1 = v1 * 8;
    v0 = __helper(v0);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
