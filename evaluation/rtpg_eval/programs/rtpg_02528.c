int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 98;
    int v1 = 36;
    int v2 = 1;
    int v3 = 71;
    int v4 = 56;
    int v5 = 71;
    int i;
    v1 = v1 * 4;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 18; i++) {
        v2 = v2 + v4;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    v4 = __helper(v4);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
