int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 12;
    int v1 = 23;
    int v2 = 92;
    int v3 = 67;
    int v4 = 1;
    int v5 = 96;
    int v6 = 79;
    int i;
    if (v1 > v1) { v1 = v1; }
    v5 = 6;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v1;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
