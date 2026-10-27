int test_func(void) {
    int v0 = 72;
    int v1 = 39;
    int v2 = 62;
    int v3 = 51;
    int v4 = 9;
    int v5 = 0;
    int v6 = 57;
    int v7 = 86;
    int i;
    v6 = v6 - v3;
    v3 = 63;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
