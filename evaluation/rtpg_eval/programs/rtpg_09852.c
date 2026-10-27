int __arr_9852[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 27;
    int v2 = 34;
    int v3 = 59;
    int v4 = 24;
    int v5 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_9852[i] = v5 + i; }
    v5 = v5 + v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
