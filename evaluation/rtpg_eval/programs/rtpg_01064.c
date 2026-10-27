int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 43;
    int v1 = 55;
    int v2 = 78;
    int v3 = 22;
    int v4 = 25;
    int v5 = 33;
    int i;
    if (v2 > v2) { v2 = v2; }
    v1 = v1 * 8;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
