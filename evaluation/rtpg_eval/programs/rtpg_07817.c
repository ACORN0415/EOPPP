int test_func(void) {
    int v0 = 95;
    int v1 = 27;
    int v2 = 68;
    int v3 = 49;
    int v4 = 94;
    int v5 = 62;
    int v6 = 89;
    int i;
    for (i = 0; i < 18; i++) {
        v6 = v6 + v4;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
