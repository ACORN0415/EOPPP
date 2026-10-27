int __arr_8258[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 51;
    int v2 = 10;
    int v3 = 90;
    int v4 = 80;
    int v5 = 24;
    int v6 = 94;
    int v7 = 20;
    int i;
    v7 = 77;
    if (v3 > v1) { v3 = v1; }
    for (i = 0; i < 10; i++) { __arr_8258[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
