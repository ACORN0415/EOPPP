int test_func(void) {
    int v0 = 91;
    int v1 = 71;
    int v2 = 44;
    int i;
    v2 = v2 * 5;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
