int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 71;
    int v2 = 21;
    int v3 = 4;
    int v4 = 69;
    int v5 = 41;
    int v6 = 79;
    int v7 = 91;
    int i;
    v4 = v4 + v4;
    if (v2 > v5) { v2 = v5; }
    v2 = v2 - v6;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
