int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 60;
    int v2 = 42;
    int i;
    v2 = v2 * 4;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v1;
    }
    v1 = __arr_didx[__idx_didx[0]];
    int *__p = &v0;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
