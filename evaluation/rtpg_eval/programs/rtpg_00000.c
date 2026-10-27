int test_func(void) {
    int v0 = 57;
    int v1 = 30;
    int v2 = 28;
    int i;
    v2 = v2 * 4;
    v2 = v2 - v1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
