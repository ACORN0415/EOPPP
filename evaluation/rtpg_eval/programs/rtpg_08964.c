int test_func(void) {
    int v0 = 33;
    int v1 = 75;
    int v2 = 75;
    int v3 = 1;
    int v4 = 17;
    int v5 = 83;
    int v6 = 3;
    int i;
    if (v3 > v2) { v3 = v2; }
    for (i = 0; i < 8; i++) {
        v0 = v0 + v5;
    }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
