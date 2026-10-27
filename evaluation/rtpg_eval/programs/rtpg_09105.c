int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 41;
    int v1 = 68;
    int v2 = 96;
    int v3 = 12;
    int v4 = 6;
    int v5 = 13;
    int v6 = 96;
    int v7 = 84;
    int i;
    if (v4 > v4) { v4 = v4; }
    v2 = v2 - v7;
    v4 = v4 * 10;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
