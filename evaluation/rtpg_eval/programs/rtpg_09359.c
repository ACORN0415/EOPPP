int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 62;
    int v2 = 88;
    int v3 = 16;
    int v4 = 23;
    int v5 = 1;
    int i;
    v1 = 4;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    v1 = __arr_didx[__idx_didx[0]];
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
