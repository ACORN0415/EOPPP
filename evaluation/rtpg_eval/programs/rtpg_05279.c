int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 7;
    int v1 = 72;
    int v2 = 88;
    int v3 = 83;
    int v4 = 93;
    int v5 = 25;
    int v6 = 45;
    int v7 = 62;
    int i;
    v4 = v4 + v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    v4 = __helper(v4);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
