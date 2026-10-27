int test_func(void) {
    int v0 = 94;
    int v1 = 45;
    int v2 = 74;
    int v3 = 87;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v2;
    }
    v3 = v3 * 9;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
