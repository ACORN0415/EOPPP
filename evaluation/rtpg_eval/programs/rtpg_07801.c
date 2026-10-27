int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 88;
    int v2 = 13;
    int v3 = 34;
    int v4 = 62;
    int v5 = 9;
    int v6 = 65;
    int v7 = 71;
    int i;
    v7 = v7 + v7;
    for (i = 0; i < 5; i++) {
        v5 = v5 + v6;
    }
    v7 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }
