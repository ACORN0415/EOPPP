int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 49;
    int v2 = 82;
    int v3 = 67;
    int v4 = 16;
    int i;
    v2 = v2 + v0;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v3;
    }
    v3 = v3 * 6;
    v4 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
