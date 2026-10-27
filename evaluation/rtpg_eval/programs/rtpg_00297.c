int test_func(void) {
    int v0 = 38;
    int v1 = 79;
    int v2 = 94;
    int v3 = 81;
    int v4 = 35;
    int v5 = 10;
    int v6 = 7;
    int v7 = 20;
    int i;
    v0 = 92;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
