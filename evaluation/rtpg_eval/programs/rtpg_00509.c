int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 30;
    int v2 = 53;
    int v3 = 25;
    int v4 = 14;
    int i;
    v0 = v0 * 2;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v4;
    }
    v3 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
