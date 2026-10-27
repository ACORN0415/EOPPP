int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 96;
    int v2 = 58;
    int v3 = 40;
    int v4 = 100;
    int i;
    if (v1 > v0) { v1 = v0; }
    v4 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
