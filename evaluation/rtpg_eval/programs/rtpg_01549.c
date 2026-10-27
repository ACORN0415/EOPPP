int test_func(void) {
    int v0 = 15;
    int v1 = 71;
    int v2 = 31;
    int v3 = 61;
    int i;
    if (v0 > v0) { v0 = v0; }
    v1 = v1 + v1;
    v2 = v2 * 2;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
