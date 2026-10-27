int __arr_9456[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 46;
    int v2 = 94;
    int v3 = 37;
    int v4 = 29;
    int i;
    for (i = 0; i < 10; i++) { __arr_9456[i] = v0 + i; }
    for (i = 0; i < 19; i++) {
        v3 = v3 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    v0 = v0 ^ v4;
    return v0;
}
int main(void) { return test_func(); }
