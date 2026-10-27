int test_func(void) {
    int v0 = 63;
    int v1 = 5;
    int v2 = 19;
    int v3 = 23;
    int i;
    v3 = v3 + v3;
    if (v0 > v0) { v0 = v0; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
