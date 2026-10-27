int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 9;
    int v2 = 36;
    int v3 = 48;
    int v4 = 50;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v4;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
