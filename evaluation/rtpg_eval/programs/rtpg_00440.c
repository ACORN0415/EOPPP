int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 5;
    int v2 = 93;
    int v3 = 50;
    int v4 = 0;
    int i;
    v0 = v0 % (v3 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
