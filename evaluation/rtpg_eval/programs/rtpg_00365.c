int test_func(void) {
    int v0 = 69;
    int v1 = 44;
    int v2 = 69;
    int v3 = 37;
    int v4 = 94;
    int v5 = 61;
    int i;
    for (i = 0; i < 14; i++) {
        v5 = v5 + v2;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
