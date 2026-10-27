int test_func(void) {
    int v0 = 49;
    int v1 = 79;
    int v2 = 9;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v1;
    }
    v0 = v0 * 4;
    v2 = v2 % (v0 + 1);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
