int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 70;
    int v2 = 93;
    int i;
    v1 = v1 * 2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
