int test_func(void) {
    int v0 = 91;
    int v1 = 61;
    int v2 = 31;
    int v3 = 57;
    int v4 = 36;
    int v5 = 11;
    int i;
    v3 = 88;
    v3 = v3 + v3;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
