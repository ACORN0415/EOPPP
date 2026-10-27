int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 9;
    int v1 = 51;
    int v2 = 22;
    int v3 = 17;
    int v4 = 73;
    int v5 = 97;
    int v6 = 23;
    int v7 = 26;
    int i;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v1;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
