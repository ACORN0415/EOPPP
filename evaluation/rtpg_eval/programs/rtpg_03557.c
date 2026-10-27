int __arr_3557[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 71;
    int v2 = 9;
    int v3 = 85;
    int v4 = 25;
    int v5 = 5;
    int v6 = 39;
    int i;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_3557[i] = v0 + i; }
    if (v5 > v3) { v5 = v3; }
    v2 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
