int test_func(void) {
    int v0 = 53;
    int v1 = 44;
    int v2 = 2;
    int v3 = 100;
    int v4 = 78;
    int i;
    if (v3 > v4) { v3 = v4; }
    int *__p = &v0;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
