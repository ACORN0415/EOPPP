int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 49;
    int v1 = 25;
    int v2 = 20;
    int v3 = 36;
    int i;
    if (v2 > v3) { v2 = v3; }
    v3 = v3 - v0;
    v0 = v0 * 5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
