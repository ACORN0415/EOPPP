int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 53;
    int v2 = 2;
    int v3 = 30;
    int v4 = 31;
    int v5 = 80;
    int i;
    v0 = 75;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
