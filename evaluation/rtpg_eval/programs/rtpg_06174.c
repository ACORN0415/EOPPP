int test_func(void) {
    int v0 = 100;
    int v1 = 60;
    int v2 = 65;
    int v3 = 16;
    int v4 = 26;
    int v5 = 50;
    int v6 = 19;
    int i;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
