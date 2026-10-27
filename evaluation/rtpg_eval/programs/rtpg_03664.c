int __arr_3664[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 41;
    int v2 = 77;
    int v3 = 55;
    int v4 = 18;
    int v5 = 10;
    int v6 = 50;
    int v7 = 46;
    int i;
    v4 = v4 - v2;
    for (i = 0; i < 10; i++) { __arr_3664[i] = v0 + i; }
    v3 = v3 * 6;
    v0 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
