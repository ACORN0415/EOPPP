int test_func(void) {
    int v0 = 47;
    int v1 = 51;
    int v2 = 36;
    int i;
    v1 = v1 * 7;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v2 = v2 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
