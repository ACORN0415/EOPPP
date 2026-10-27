int test_func(void) {
    int v0 = 46;
    int v1 = 67;
    int v2 = 68;
    int v3 = 33;
    int v4 = 9;
    int i;
    v4 = v4 * 8;
    v1 = v1 / (v2 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
