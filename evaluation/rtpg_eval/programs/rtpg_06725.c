int test_func(void) {
    int v0 = 92;
    int v1 = 59;
    int v2 = 38;
    int v3 = 86;
    int v4 = 24;
    int v5 = 63;
    int v6 = 81;
    int i;
    v4 = 87;
    v5 = v5 * 8;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
