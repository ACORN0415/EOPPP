int test_func(void) {
    int v0 = 14;
    int v1 = 73;
    int v2 = 88;
    int v3 = 69;
    int v4 = 29;
    int v5 = 58;
    int v6 = 95;
    int v7 = 79;
    int i;
    v4 = 33;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
