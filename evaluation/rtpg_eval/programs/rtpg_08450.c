int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 56;
    int v2 = 59;
    int v3 = 55;
    int v4 = 67;
    int v5 = 0;
    int v6 = 14;
    int i;
    v4 = v4 - v0;
    v5 = v5 + v6;
    v4 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
