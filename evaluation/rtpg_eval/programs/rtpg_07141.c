int test_func(void) {
    int v0 = 50;
    int v1 = 4;
    int v2 = 36;
    int v3 = 70;
    int v4 = 39;
    int v5 = 100;
    int v6 = 61;
    int v7 = 85;
    int i;
    if (v5 > v1) { v5 = v1; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
