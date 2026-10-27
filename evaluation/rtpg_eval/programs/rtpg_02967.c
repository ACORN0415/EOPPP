int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2967[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 27;
    int v2 = 39;
    int v3 = 8;
    int v4 = 97;
    int v5 = 68;
    int i;
    for (i = 0; i < 10; i++) { __arr_2967[i] = v1 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    v2 = __helper(v2);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
