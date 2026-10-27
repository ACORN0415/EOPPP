int test_func(void) {
    int v0 = 4;
    int v1 = 84;
    int v2 = 23;
    int v3 = 98;
    int v4 = 3;
    int i;
    v0 = v0 * 5;
    if (v1 > v0) { v1 = v0; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
