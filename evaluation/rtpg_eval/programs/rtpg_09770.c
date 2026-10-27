int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 64;
    int v2 = 39;
    int v3 = 27;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v2;
    }
    v0 = v0 + v0;
    if (v2 > v1) { v2 = v1; }
    v3 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
