int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9628[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 94;
    int v2 = 1;
    int v3 = 59;
    int v4 = 21;
    int v5 = 41;
    int v6 = 82;
    int i;
    v4 = v4 * 10;
    for (i = 0; i < 10; i++) { __arr_9628[i] = v0 + i; }
    if (v0 > v5) { v0 = v5; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
