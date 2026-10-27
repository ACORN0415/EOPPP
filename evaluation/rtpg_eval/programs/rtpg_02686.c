int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 52;
    int v2 = 3;
    int v3 = 71;
    int v4 = 34;
    int v5 = 95;
    int v6 = 50;
    int v7 = 95;
    int i;
    v0 = v0 * 9;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    v3 = v3 & v2;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
