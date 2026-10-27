int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 56;
    int v1 = 33;
    int v2 = 71;
    int v3 = 58;
    int v4 = 87;
    int v5 = 27;
    int v6 = 70;
    int i;
    v5 = v5 + v2;
    v4 = v4 - v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v6 = __helper(v6);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
