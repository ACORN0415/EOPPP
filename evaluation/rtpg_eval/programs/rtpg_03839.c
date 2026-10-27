int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 81;
    int v2 = 27;
    int v3 = 80;
    int v4 = 91;
    int v5 = 85;
    int i;
    v0 = 48;
    v1 = __arr_didx[__idx_didx[0]];
    v4 = v4 / (v0 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
