int __arr_6023[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 91;
    int v2 = 21;
    int v3 = 55;
    int v4 = 19;
    int i;
    for (i = 0; i < 10; i++) { __arr_6023[i] = v0 + i; }
    v3 = __arr_didx[__idx_didx[0]];
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
