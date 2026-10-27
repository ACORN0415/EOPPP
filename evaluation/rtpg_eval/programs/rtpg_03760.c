int test_func(void) {
    int v0 = 69;
    int v1 = 62;
    int v2 = 59;
    int i;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 11; i++) {
        v0 = v0 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
