int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 80;
    int v2 = 43;
    int v3 = 54;
    int i;
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 15; i++) {
        v3 = v3 + v0;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
