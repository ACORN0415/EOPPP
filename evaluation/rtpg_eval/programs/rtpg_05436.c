int test_func(void) {
    int v0 = 19;
    int v1 = 4;
    int v2 = 85;
    int v3 = 4;
    int i;
    v2 = 37;
    v1 = v1 - v0;
    if (v0 > v0) { v0 = v0; }
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
