int __arr_5691[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 42;
    int v2 = 85;
    int v3 = 27;
    int v4 = 94;
    int i;
    v0 = v0 * 10;
    for (i = 0; i < 10; i++) { __arr_5691[i] = v3 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v3 = __arr_didx[__idx_didx[0]];
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
