int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 31;
    int v1 = 46;
    int v2 = 88;
    int v3 = 51;
    int v4 = 70;
    int i;
    v2 = v2 * 7;
    if (v1 > v2) { v1 = v2; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    v0 = __helper(v0);
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
