int test_func(void) {
    int v0 = 84;
    int v1 = 90;
    int v2 = 22;
    int v3 = 45;
    int v4 = 92;
    int v5 = 73;
    int i;
    v5 = v5 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
