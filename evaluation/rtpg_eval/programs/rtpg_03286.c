int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 12;
    int v2 = 7;
    int v3 = 36;
    int v4 = 44;
    int v5 = 40;
    int i;
    v2 = v2 * 2;
    v5 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
