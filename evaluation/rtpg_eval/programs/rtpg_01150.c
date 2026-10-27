int test_func(void) {
    int v0 = 57;
    int v1 = 78;
    int v2 = 13;
    int v3 = 87;
    int i;
    v3 = v3 + v3;
    v2 = v2 - v1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v0 = v0 | v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
