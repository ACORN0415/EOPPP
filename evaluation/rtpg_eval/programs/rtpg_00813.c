int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 28;
    int v2 = 54;
    int v3 = 47;
    int v4 = 38;
    int v5 = 47;
    int v6 = 37;
    int i;
    v3 = v3 * 8;
    v1 = v1 - v3;
    v0 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    v0 = v0 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
