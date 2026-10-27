int __arr_8782[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 42;
    int v2 = 9;
    int v3 = 80;
    int v4 = 55;
    int v5 = 87;
    int i;
    for (i = 0; i < 10; i++) { __arr_8782[i] = v5 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
