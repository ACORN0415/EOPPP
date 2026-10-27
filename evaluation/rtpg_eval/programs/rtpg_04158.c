int test_func(void) {
    int v0 = 57;
    int v1 = 32;
    int v2 = 25;
    int i;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
