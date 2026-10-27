int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 1;
    int v1 = 77;
    int v2 = 99;
    int v3 = 68;
    int v4 = 89;
    int i;
    v0 = v0 * 2;
    v3 = v3 + v4;
    v3 = __helper(v3);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
