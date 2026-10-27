int test_func(void) {
    int v0 = 77;
    int v1 = 88;
    int v2 = 2;
    int v3 = 14;
    int v4 = 41;
    int v5 = 34;
    int i;
    v0 = 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
