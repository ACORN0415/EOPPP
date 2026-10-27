int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 76;
    int v2 = 93;
    int v3 = 92;
    int v4 = 49;
    int v5 = 32;
    int v6 = 90;
    int i;
    v2 = v2 - v5;
    v2 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
