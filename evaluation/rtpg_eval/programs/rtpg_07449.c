int test_func(void) {
    int v0 = 85;
    int v1 = 75;
    int v2 = 21;
    int v3 = 67;
    int v4 = 54;
    int v5 = 61;
    int v6 = 34;
    int i;
    v4 = v4 * 5;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
