int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9843[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 48;
    int v2 = 82;
    int v3 = 60;
    int v4 = 51;
    int i;
    v3 = v3 * 4;
    v3 = 6;
    for (i = 0; i < 10; i++) { __arr_9843[i] = v3 + i; }
    v3 = __helper(v3);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
