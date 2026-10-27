int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 1;
    int v2 = 12;
    int v3 = 9;
    int v4 = 91;
    int v5 = 6;
    int i;
    v4 = v4 - v3;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v4;
    }
    v4 = 54;
    v3 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
