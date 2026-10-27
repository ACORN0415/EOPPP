int test_func(void) {
    int v0 = 95;
    int v1 = 9;
    int v2 = 94;
    int v3 = 34;
    int v4 = 39;
    int v5 = 79;
    int v6 = 40;
    int v7 = 48;
    int i;
    v3 = v3 * 6;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v6;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v4 = v4 / (v6 + 1);
    return v0;
}
int main(void) { return test_func(); }
