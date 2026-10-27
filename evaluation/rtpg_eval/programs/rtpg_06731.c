int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 49;
    int v1 = 40;
    int v2 = 50;
    int v3 = 85;
    int v4 = 93;
    int v5 = 61;
    int i;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v5;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v0 = v0 / (v3 + 1);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
