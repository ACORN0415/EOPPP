int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 94;
    int v1 = 27;
    int v2 = 20;
    int v3 = 2;
    int v4 = 69;
    int i;
    v2 = v2 * 7;
    v3 = v3 / (v1 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
