int __arr_5531[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 21;
    int v2 = 87;
    int v3 = 69;
    int v4 = 23;
    int v5 = 47;
    int v6 = 15;
    int v7 = 72;
    int i;
    for (i = 0; i < 10; i++) { __arr_5531[i] = v4 + i; }
    int *__p = &v7;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
