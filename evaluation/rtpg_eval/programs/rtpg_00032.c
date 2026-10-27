int test_func(void) {
    int v0 = 6;
    int v1 = 57;
    int v2 = 33;
    int v3 = 87;
    int v4 = 57;
    int i;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v4;
    }
    v3 = v3 - v1;
    v1 = v1 ^ v3;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
