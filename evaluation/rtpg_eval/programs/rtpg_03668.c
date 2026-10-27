int test_func(void) {
    int v0 = 49;
    int v1 = 48;
    int v2 = 33;
    int v3 = 83;
    int v4 = 38;
    int i;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
