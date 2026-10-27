int test_func(void) {
    int v0 = 61;
    int v1 = 16;
    int v2 = 48;
    int v3 = 15;
    int v4 = 62;
    int v5 = 38;
    int v6 = 92;
    int v7 = 100;
    int i;
    v7 = v7 - v2;
    for (i = 0; i < 6; i++) {
        v7 = v7 + v4;
    }
    if (v5 > v0) { v5 = v0; }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
