int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 65;
    int v2 = 10;
    int v3 = 41;
    int v4 = 46;
    int i;
    v0 = v0 + v3;
    v2 = 81;
    v3 = v3 - v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v4 = __arr_didx[__idx_didx[0]];
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
