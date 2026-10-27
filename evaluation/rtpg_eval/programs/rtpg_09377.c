int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 66;
    int v2 = 50;
    int v3 = 62;
    int i;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v1;
    }
    v0 = v0 - v1;
    v1 = v1 * 7;
    v0 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v0 = v0 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
