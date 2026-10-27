int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 93;
    int v2 = 60;
    int v3 = 6;
    int v4 = 22;
    int v5 = 15;
    int v6 = 8;
    int i;
    v4 = 17;
    if (v2 > v0) { v2 = v0; }
    v2 = v2 + v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
