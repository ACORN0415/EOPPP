int test_func(void) {
    int v0 = 62;
    int v1 = 45;
    int v2 = 17;
    int v3 = 99;
    int v4 = 88;
    int v5 = 8;
    int v6 = 64;
    int v7 = 37;
    int i;
    v5 = v5 + v3;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
