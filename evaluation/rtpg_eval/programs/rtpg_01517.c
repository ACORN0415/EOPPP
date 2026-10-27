int __arr_1517[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 47;
    int v2 = 40;
    int v3 = 65;
    int v4 = 65;
    int v5 = 27;
    int v6 = 9;
    int i;
    for (i = 0; i < 10; i++) { __arr_1517[i] = v4 + i; }
    v2 = v2 + v1;
    v0 = __arr_didx[__idx_didx[0]];
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
