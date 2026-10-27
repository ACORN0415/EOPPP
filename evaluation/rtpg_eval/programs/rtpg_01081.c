int test_func(void) {
    int v0 = 32;
    int v1 = 16;
    int v2 = 45;
    int i;
    v0 = v0 - v1;
    v2 = v2 + v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
