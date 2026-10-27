int test_func(void) {
    int v0 = 65;
    int v1 = 95;
    int v2 = 84;
    int i;
    v0 = v0 * 3;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
