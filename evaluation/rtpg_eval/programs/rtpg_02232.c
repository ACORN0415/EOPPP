int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 43;
    int v2 = 53;
    int v3 = 91;
    int i;
    v1 = v1 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v2 = __arr_didx[__idx_didx[0]];
    v0 = v0 | v2;
    return v0;
}
int main(void) { return test_func(); }
