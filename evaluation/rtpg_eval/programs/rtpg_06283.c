int test_func(void) {
    int v0 = 54;
    int v1 = 42;
    int v2 = 76;
    int v3 = 98;
    int v4 = 22;
    int i;
    for (i = 0; i < 16; i++) {
        v3 = v3 + v0;
    }
    v4 = v4 + v2;
    v3 = v3 * 2;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
