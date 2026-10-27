int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 31;
    int v1 = 30;
    int v2 = 44;
    int v3 = 63;
    int v4 = 92;
    int i;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v2;
    }
    v1 = v1 * 2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
