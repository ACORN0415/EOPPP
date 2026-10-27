int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 92;
    int v2 = 66;
    int v3 = 30;
    int v4 = 21;
    int i;
    v2 = v2 * 7;
    v4 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
