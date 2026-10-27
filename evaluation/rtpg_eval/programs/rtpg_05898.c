int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 90;
    int v2 = 4;
    int v3 = 89;
    int v4 = 31;
    int v5 = 100;
    int v6 = 61;
    int i;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v5;
    }
    v6 = v6 / (v3 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
