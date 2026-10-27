int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 39;
    int v2 = 72;
    int v3 = 60;
    int v4 = 23;
    int v5 = 45;
    int i;
    if (v5 > v0) { v5 = v0; }
    v0 = v0 + v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
