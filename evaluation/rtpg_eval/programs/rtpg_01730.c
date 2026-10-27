int __arr_1730[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 71;
    int v2 = 54;
    int v3 = 55;
    int v4 = 16;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_1730[i] = v3 + i; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
