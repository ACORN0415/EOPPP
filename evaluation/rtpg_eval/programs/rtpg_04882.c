int test_func(void) {
    int v0 = 60;
    int v1 = 41;
    int v2 = 88;
    int v3 = 66;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v2;
    }
    v1 = v1 + v2;
    v3 = v3 - v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
