int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 12;
    int v2 = 14;
    int v3 = 100;
    int v4 = 63;
    int v5 = 12;
    int i;
    v0 = 83;
    v3 = v3 * 7;
    v2 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
