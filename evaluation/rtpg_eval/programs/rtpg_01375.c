int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 50;
    int v1 = 43;
    int v2 = 0;
    int i;
    v0 = 48;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v1;
    }
    if (v0 > v1) { v0 = v1; }
    v2 = __helper(v2);
    v0 = v0 % (v2 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
