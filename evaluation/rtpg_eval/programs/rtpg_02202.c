int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 63;
    int v1 = 2;
    int v2 = 81;
    int v3 = 46;
    int v4 = 3;
    int i;
    v4 = v4 * 3;
    v3 = v3 - v2;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v1;
    }
    v4 = __helper(v4);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
