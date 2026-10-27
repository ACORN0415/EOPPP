int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 26;
    int v2 = 84;
    int v3 = 99;
    int v4 = 13;
    int v5 = 54;
    int v6 = 3;
    int i;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v6;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v3 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
