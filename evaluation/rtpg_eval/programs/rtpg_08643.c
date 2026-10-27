int test_func(void) {
    int v0 = 13;
    int v1 = 94;
    int v2 = 12;
    int v3 = 30;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v3;
    }
    v0 = v0 * 8;
    v2 = v2 + v3;
    v0 = v0 & v2;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
