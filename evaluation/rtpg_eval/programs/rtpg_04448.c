int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 34;
    int v2 = 91;
    int v3 = 16;
    int v4 = 5;
    int i;
    v4 = v4 + v3;
    v3 = v3 - v4;
    v1 = v1 * 9;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
