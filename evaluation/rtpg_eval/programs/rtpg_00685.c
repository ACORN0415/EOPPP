int test_func(void) {
    int v0 = 29;
    int v1 = 80;
    int v2 = 5;
    int v3 = 16;
    int i;
    v0 = 54;
    v1 = v1 + v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
