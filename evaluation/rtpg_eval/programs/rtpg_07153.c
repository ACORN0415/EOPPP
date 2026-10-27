int test_func(void) {
    int v0 = 0;
    int v1 = 22;
    int v2 = 70;
    int v3 = 45;
    int v4 = 29;
    int v5 = 81;
    int v6 = 82;
    int v7 = 89;
    int i;
    for (i = 0; i < 18; i++) {
        v7 = v7 + v0;
    }
    v6 = v6 + v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
