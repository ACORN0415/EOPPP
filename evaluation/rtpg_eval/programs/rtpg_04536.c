int test_func(void) {
    int v0 = 39;
    int v1 = 60;
    int v2 = 68;
    int v3 = 91;
    int v4 = 25;
    int v5 = 73;
    int v6 = 63;
    int v7 = 87;
    int i;
    v4 = v4 + v7;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
