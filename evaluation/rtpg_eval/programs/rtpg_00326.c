int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 15;
    int v2 = 43;
    int v3 = 13;
    int v4 = 96;
    int v5 = 37;
    int i;
    if (v5 > v2) { v5 = v2; }
    v5 = 38;
    v5 = __arr_didx[__idx_didx[0]];
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
