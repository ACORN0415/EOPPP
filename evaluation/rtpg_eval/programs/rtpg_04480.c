int test_func(void) {
    int v0 = 94;
    int v1 = 98;
    int v2 = 4;
    int v3 = 95;
    int v4 = 8;
    int v5 = 88;
    int v6 = 53;
    int v7 = 53;
    int i;
    v7 = 90;
    v7 = v7 + v3;
    for (i = 0; i < 7; i++) {
        v5 = v5 + v1;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    return v0;
}
int main(void) { return test_func(); }
