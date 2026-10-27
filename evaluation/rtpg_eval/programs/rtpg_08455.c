int test_func(void) {
    int v0 = 34;
    int v1 = 94;
    int v2 = 37;
    int i;
    v1 = v1 + v0;
    v0 = 90;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
