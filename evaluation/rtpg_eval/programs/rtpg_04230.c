int __arr_4230[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 48;
    int v2 = 80;
    int i;
    for (i = 0; i < 10; i++) { __arr_4230[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v1 = v1 % (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
