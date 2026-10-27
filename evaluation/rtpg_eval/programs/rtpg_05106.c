int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 86;
    int v2 = 76;
    int v3 = 97;
    int v4 = 72;
    int i;
    v4 = v4 - v1;
    v2 = v2 + v2;
    if (v1 > v4) { v1 = v4; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
