int test_func(void) {
    int v0 = 84;
    int v1 = 3;
    int v2 = 54;
    int i;
    v1 = 85;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v0 = v0 ^ v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
