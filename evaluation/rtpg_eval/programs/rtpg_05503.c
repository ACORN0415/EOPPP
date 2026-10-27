int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 33;
    int v2 = 36;
    int v3 = 93;
    int v4 = 83;
    int v5 = 42;
    int v6 = 37;
    int i;
    for (i = 0; i < 11; i++) {
        v5 = v5 + v1;
    }
    v0 = v0 + v5;
    if (v1 > v5) { v1 = v5; }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
