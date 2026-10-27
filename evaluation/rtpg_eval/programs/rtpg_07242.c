int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 76;
    int v1 = 24;
    int v2 = 34;
    int v3 = 84;
    int v4 = 7;
    int v5 = 82;
    int v6 = 31;
    int v7 = 17;
    int i;
    v7 = v7 - v4;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v0;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    v7 = __helper(v7);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
