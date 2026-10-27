int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 4;
    int v2 = 0;
    int v3 = 40;
    int v4 = 97;
    int v5 = 64;
    int v6 = 81;
    int v7 = 68;
    int i;
    if (v4 > v6) { v4 = v6; }
    v3 = 91;
    int *__p = &v0;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
