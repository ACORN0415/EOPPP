int test_func(void) {
    int v0 = 62;
    int v1 = 17;
    int v2 = 91;
    int v3 = 90;
    int i;
    v2 = v2 + v0;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
