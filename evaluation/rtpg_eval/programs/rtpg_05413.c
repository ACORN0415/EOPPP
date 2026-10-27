int __arr_5413[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 54;
    int v2 = 97;
    int v3 = 75;
    int v4 = 74;
    int v5 = 99;
    int i;
    for (i = 0; i < 10; i++) { __arr_5413[i] = v2 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    v3 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
