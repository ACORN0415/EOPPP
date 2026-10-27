int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 27;
    int v1 = 92;
    int v2 = 86;
    int v3 = 69;
    int v4 = 67;
    int v5 = 67;
    int v6 = 79;
    int i;
    v1 = v1 + v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
