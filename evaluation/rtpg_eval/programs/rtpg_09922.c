int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 79;
    int v1 = 78;
    int v2 = 40;
    int v3 = 79;
    int i;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v1;
    }
    v0 = v0 + v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
