int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 3;
    int v2 = 50;
    int v3 = 95;
    int v4 = 59;
    int v5 = 30;
    int v6 = 53;
    int v7 = 11;
    int i;
    v4 = 92;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v0 = __arr_didx[__idx_didx[0]];
    v6 = v6 % (v7 + 1);
    return v0;
}
int main(void) { return test_func(); }
