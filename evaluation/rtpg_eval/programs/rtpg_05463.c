int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 92;
    int v1 = 15;
    int v2 = 56;
    int v3 = 14;
    int v4 = 2;
    int i;
    v0 = v0 + v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
