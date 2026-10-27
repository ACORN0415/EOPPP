int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 89;
    int v2 = 46;
    int i;
    for (i = 0; i < 18; i++) {
        v0 = v0 + v2;
    }
    v2 = v2 - v1;
    v0 = v0 * 2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
