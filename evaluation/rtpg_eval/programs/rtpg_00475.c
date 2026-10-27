int test_func(void) {
    int v0 = 32;
    int v1 = 30;
    int v2 = 8;
    int v3 = 7;
    int v4 = 58;
    int v5 = 19;
    int i;
    v0 = v0 + v1;
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
