int __arr_5337[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 54;
    int v2 = 82;
    int v3 = 86;
    int v4 = 55;
    int v5 = 82;
    int v6 = 62;
    int i;
    v0 = v0 * 9;
    for (i = 0; i < 10; i++) { __arr_5337[i] = v5 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
