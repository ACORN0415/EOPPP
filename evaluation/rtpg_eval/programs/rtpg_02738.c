int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 74;
    int v2 = 87;
    int v3 = 95;
    int v4 = 69;
    int i;
    if (v2 > v1) { v2 = v1; }
    v0 = v0 - v3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
