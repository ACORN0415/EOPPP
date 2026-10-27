int test_func(void) {
    int v0 = 35;
    int v1 = 73;
    int v2 = 40;
    int v3 = 90;
    int i;
    v3 = v3 * 3;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
