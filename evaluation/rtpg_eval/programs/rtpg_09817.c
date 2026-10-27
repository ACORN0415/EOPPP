int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 63;
    int v2 = 73;
    int v3 = 51;
    int v4 = 20;
    int v5 = 42;
    int i;
    v1 = v1 + v5;
    v2 = v2 * 4;
    v4 = __arr_didx[__idx_didx[0]];
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
