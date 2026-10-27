int test_func(void) {
    int v0 = 74;
    int v1 = 88;
    int v2 = 10;
    int v3 = 65;
    int i;
    if (v3 > v1) { v3 = v1; }
    v1 = v1 - v2;
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
