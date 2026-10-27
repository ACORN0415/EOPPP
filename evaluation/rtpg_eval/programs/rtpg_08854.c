int test_func(void) {
    int v0 = 80;
    int v1 = 45;
    int v2 = 84;
    int v3 = 29;
    int v4 = 65;
    int v5 = 67;
    int i;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v4;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
