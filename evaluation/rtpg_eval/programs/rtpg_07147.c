int test_func(void) {
    int v0 = 84;
    int v1 = 46;
    int v2 = 51;
    int v3 = 100;
    int i;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v0;
    }
    if (v1 > v1) { v1 = v1; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
