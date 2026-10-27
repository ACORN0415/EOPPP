int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 84;
    int v2 = 88;
    int v3 = 75;
    int i;
    v3 = 27;
    v3 = v3 + v3;
    v2 = v2 - v1;
    int *__p = &v1;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
