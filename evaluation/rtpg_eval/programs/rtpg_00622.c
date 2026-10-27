int __arr_622[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 44;
    int v2 = 44;
    int v3 = 63;
    int i;
    v1 = v1 + v3;
    for (i = 0; i < 10; i++) { __arr_622[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
