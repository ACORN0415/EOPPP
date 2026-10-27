int test_func(void) {
    int v0 = 51;
    int v1 = 9;
    int v2 = 97;
    int v3 = 33;
    int i;
    v2 = v2 * 7;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v0;
    }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
