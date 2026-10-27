int test_func(void) {
    int v0 = 84;
    int v1 = 74;
    int v2 = 3;
    int v3 = 70;
    int v4 = 68;
    int v5 = 66;
    int v6 = 27;
    int v7 = 59;
    int i;
    v7 = v7 + v1;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v5;
    }
    if (v4 > v0) { v4 = v0; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
