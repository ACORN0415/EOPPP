int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 82;
    int v1 = 64;
    int v2 = 40;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v1;
    }
    if (v2 > v0) { v2 = v0; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
