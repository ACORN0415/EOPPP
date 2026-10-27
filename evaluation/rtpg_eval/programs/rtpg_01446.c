int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 45;
    int v2 = 58;
    int v3 = 76;
    int v4 = 16;
    int v5 = 73;
    int v6 = 15;
    int v7 = 3;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v0;
    }
    v6 = __arr_didx[__idx_didx[0]];
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
