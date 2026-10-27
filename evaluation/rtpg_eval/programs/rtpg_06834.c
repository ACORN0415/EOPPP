int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 1;
    int v1 = 94;
    int v2 = 56;
    int v3 = 9;
    int v4 = 50;
    int v5 = 69;
    int v6 = 7;
    int v7 = 45;
    int i;
    for (i = 0; i < 9; i++) {
        v7 = v7 + v6;
    }
    v3 = __helper(v3);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    v0 = v0 ^ v4;
    return v0;
}
int main(void) { return test_func(); }
