int test_func(void) {
    int v0 = 67;
    int v1 = 43;
    int v2 = 84;
    int i;
    v2 = v2 - v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
