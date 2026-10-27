int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 75;
    int v2 = 58;
    int v3 = 2;
    int v4 = 34;
    int v5 = 10;
    int v6 = 75;
    int v7 = 36;
    int i;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v4;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v2 = __arr_didx[__idx_didx[0]];
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
