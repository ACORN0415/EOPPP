int test_func(void) {
    int v0 = 40;
    int v1 = 86;
    int v2 = 83;
    int v3 = 57;
    int v4 = 67;
    int v5 = 49;
    int v6 = 41;
    int i;
    if (v6 > v5) { v6 = v5; }
    v6 = v6 * 9;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
