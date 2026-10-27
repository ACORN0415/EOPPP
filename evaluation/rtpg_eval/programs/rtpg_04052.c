int test_func(void) {
    int v0 = 34;
    int v1 = 83;
    int v2 = 85;
    int i;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v2;
    }
    v0 = v0 - v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v1 = v1 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
