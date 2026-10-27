int test_func(void) {
    int v0 = 38;
    int v1 = 31;
    int v2 = 91;
    int v3 = 73;
    int v4 = 61;
    int v5 = 77;
    int i;
    v3 = v3 + v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
