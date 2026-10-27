int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 99;
    int v1 = 61;
    int v2 = 38;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v2;
    }
    v2 = v2 + v0;
    v0 = __helper(v0);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
