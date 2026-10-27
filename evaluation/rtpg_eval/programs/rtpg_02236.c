int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 91;
    int v2 = 27;
    int v3 = 14;
    int v4 = 28;
    int v5 = 94;
    int v6 = 78;
    int i;
    for (i = 0; i < 5; i++) {
        v5 = v5 + v5;
    }
    v2 = v2 * 7;
    v4 = 6;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
