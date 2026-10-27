int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 70;
    int v1 = 37;
    int v2 = 28;
    int v3 = 57;
    int v4 = 94;
    int i;
    for (i = 0; i < 19; i++) {
        v4 = v4 + v4;
    }
    v3 = v3 * 8;
    v4 = v4 + v2;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    v0 = __helper(v0);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
