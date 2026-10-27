int test_func(void) {
    int v0 = 74;
    int v1 = 4;
    int v2 = 53;
    int i;
    v1 = v1 * 4;
    v1 = v1 - v2;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v0;
    }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
