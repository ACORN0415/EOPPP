int __arr_682[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 57;
    int v2 = 96;
    int v3 = 93;
    int v4 = 76;
    int v5 = 65;
    int i;
    for (i = 0; i < 10; i++) { __arr_682[i] = v1 + i; }
    v1 = 90;
    v3 = v3 - v1;
    v1 = __arr_didx[__idx_didx[0]];
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
