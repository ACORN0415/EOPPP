int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 2;
    int v2 = 4;
    int v3 = 14;
    int v4 = 62;
    int v5 = 97;
    int i;
    v5 = v5 * 3;
    v3 = v3 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
