int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 89;
    int v1 = 85;
    int v2 = 61;
    int v3 = 29;
    int v4 = 59;
    int v5 = 26;
    int v6 = 49;
    int v7 = 79;
    int i;
    v0 = v0 * 3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v5 = __helper(v5);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
