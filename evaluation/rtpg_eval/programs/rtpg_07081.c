int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 84;
    int v2 = 26;
    int v3 = 38;
    int v4 = 49;
    int v5 = 57;
    int v6 = 34;
    int i;
    v6 = v6 * 9;
    v3 = v3 - v2;
    v4 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
