int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 36;
    int v2 = 33;
    int v3 = 60;
    int v4 = 53;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v0;
    }
    v0 = v0 * 4;
    v2 = v2 + v0;
    v0 = __arr_didx[__idx_didx[0]];
    int *__p = &v4;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
