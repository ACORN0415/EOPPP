int __arr_1148[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 63;
    int v2 = 4;
    int v3 = 79;
    int v4 = 94;
    int v5 = 17;
    int i;
    v4 = v4 - v5;
    for (i = 0; i < 10; i++) { __arr_1148[i] = v2 + i; }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    v4 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
