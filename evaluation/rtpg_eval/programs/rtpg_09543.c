int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 79;
    int v2 = 26;
    int v3 = 59;
    int v4 = 98;
    int v5 = 75;
    int v6 = 65;
    int i;
    if (v4 > v1) { v4 = v1; }
    v1 = v1 - v2;
    v0 = v0 + v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
