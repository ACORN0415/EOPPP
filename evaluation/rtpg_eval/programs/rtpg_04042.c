int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 88;
    int v2 = 95;
    int v3 = 17;
    int i;
    v1 = v1 * 8;
    if (v0 > v0) { v0 = v0; }
    for (i = 0; i < 13; i++) {
        v0 = v0 + v3;
    }
    v3 = __arr_didx[__idx_didx[0]];
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
