int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 69;
    int v2 = 55;
    int v3 = 60;
    int v4 = 73;
    int i;
    v1 = v1 + v1;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v2;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
