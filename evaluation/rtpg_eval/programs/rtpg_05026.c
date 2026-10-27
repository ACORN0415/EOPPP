int test_func(void) {
    int v0 = 85;
    int v1 = 49;
    int v2 = 75;
    int i;
    v1 = 54;
    v0 = v0 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
