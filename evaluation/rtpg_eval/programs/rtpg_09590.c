int test_func(void) {
    int v0 = 4;
    int v1 = 11;
    int v2 = 5;
    int v3 = 11;
    int v4 = 25;
    int v5 = 56;
    int v6 = 82;
    int v7 = 80;
    int i;
    v4 = 65;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
