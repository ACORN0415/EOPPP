int test_func(void) {
    int v0 = 39;
    int v1 = 13;
    int v2 = 98;
    int v3 = 62;
    int v4 = 6;
    int i;
    v3 = v3 * 7;
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
