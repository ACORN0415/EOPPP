int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 79;
    int v2 = 33;
    int v3 = 48;
    int v4 = 37;
    int v5 = 63;
    int i;
    if (v2 > v4) { v2 = v4; }
    v0 = v0 - v3;
    v5 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
