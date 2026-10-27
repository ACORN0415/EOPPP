int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 28;
    int v1 = 37;
    int v2 = 30;
    int i;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 6; i++) {
        v1 = v1 + v2;
    }
    v2 = v2 - v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
