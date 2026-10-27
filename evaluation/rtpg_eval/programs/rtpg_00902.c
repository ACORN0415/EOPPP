int test_func(void) {
    int v0 = 26;
    int v1 = 2;
    int v2 = 64;
    int v3 = 98;
    int v4 = 83;
    int v5 = 31;
    int i;
    v0 = v0 + v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
