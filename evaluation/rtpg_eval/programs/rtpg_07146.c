int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 18;
    int v1 = 14;
    int v2 = 38;
    int v3 = 84;
    int v4 = 21;
    int v5 = 87;
    int v6 = 70;
    int v7 = 25;
    int i;
    if (v6 > v0) { v6 = v0; }
    v3 = __helper(v3);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
