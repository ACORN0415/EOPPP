int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 84;
    int v1 = 7;
    int v2 = 33;
    int v3 = 43;
    int i;
    v2 = v2 * 8;
    v0 = v0 + v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
