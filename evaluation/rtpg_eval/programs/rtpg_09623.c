int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 17;
    int v2 = 28;
    int v3 = 87;
    int v4 = 66;
    int v5 = 35;
    int v6 = 39;
    int v7 = 15;
    int i;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v3;
    }
    if (v2 > v3) { v2 = v3; }
    v1 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
