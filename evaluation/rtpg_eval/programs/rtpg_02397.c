int test_func(void) {
    int v0 = 67;
    int v1 = 84;
    int v2 = 98;
    int v3 = 17;
    int v4 = 93;
    int v5 = 9;
    int i;
    if (v1 > v5) { v1 = v5; }
    for (i = 0; i < 13; i++) {
        v4 = v4 + v0;
    }
    v2 = v2 + v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
