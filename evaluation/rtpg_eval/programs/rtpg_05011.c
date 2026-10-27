int test_func(void) {
    int v0 = 66;
    int v1 = 15;
    int v2 = 47;
    int v3 = 75;
    int v4 = 2;
    int v5 = 0;
    int v6 = 10;
    int v7 = 72;
    int i;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v4;
    }
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
