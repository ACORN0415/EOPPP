int test_func(void) {
    int v0 = 6;
    int v1 = 88;
    int v2 = 20;
    int v3 = 56;
    int i;
    if (v0 > v1) { v0 = v1; }
    int *__p = &v0;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
