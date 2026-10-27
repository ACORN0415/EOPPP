int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 96;
    int v1 = 19;
    int v2 = 18;
    int i;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v1;
    }
    v0 = v0 - v1;
    v1 = v1 * 8;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
