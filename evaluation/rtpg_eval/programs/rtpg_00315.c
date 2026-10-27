int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 53;
    int v2 = 100;
    int v3 = 20;
    int v4 = 56;
    int i;
    v0 = v0 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__p = &v2;
    *__p = *__p + 1;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
