int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 91;
    int v2 = 78;
    int v3 = 4;
    int i;
    v1 = v1 - v3;
    v0 = v0 + v1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
