int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 41;
    int v1 = 69;
    int v2 = 99;
    int v3 = 6;
    int v4 = 9;
    int i;
    v0 = v0 - v1;
    for (i = 0; i < 17; i++) {
        v3 = v3 + v2;
    }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
