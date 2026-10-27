int __arr_9657[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 100;
    int v2 = 68;
    int i;
    for (i = 0; i < 10; i++) { __arr_9657[i] = v2 + i; }
    if (v1 > v0) { v1 = v0; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
