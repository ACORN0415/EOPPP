int test_func(void) {
    int v0 = 85;
    int v1 = 99;
    int v2 = 24;
    int v3 = 97;
    int v4 = 70;
    int v5 = 95;
    int v6 = 31;
    int i;
    v6 = v6 * 10;
    if (v3 > v2) { v3 = v2; }
    v5 = v5 + v3;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }
