int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_389[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 22;
    int v2 = 35;
    int i;
    for (i = 0; i < 10; i++) { __arr_389[i] = v0 + i; }
    for (i = 0; i < 9; i++) {
        v2 = v2 + v1;
    }
    v0 = v0 - v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
