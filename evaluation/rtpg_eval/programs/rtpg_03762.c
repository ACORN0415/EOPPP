int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 6;
    int v1 = 26;
    int v2 = 37;
    int v3 = 6;
    int v4 = 6;
    int v5 = 79;
    int v6 = 21;
    int v7 = 44;
    int i;
    v4 = v4 + v7;
    v7 = v7 % (v3 + 1);
    v3 = __helper(v3);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
