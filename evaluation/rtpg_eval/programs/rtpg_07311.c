int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 82;
    int v2 = 12;
    int v3 = 86;
    int v4 = 28;
    int i;
    v2 = 14;
    if (v4 > v1) { v4 = v1; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
