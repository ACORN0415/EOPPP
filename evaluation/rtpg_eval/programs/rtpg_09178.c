int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 3;
    int v1 = 71;
    int v2 = 56;
    int i;
    if (v1 > v1) { v1 = v1; }
    for (i = 0; i < 10; i++) {
        v2 = v2 + v2;
    }
    v0 = 5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
