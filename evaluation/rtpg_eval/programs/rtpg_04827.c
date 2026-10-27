int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 38;
    int v2 = 69;
    int i;
    v2 = v2 * 2;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
