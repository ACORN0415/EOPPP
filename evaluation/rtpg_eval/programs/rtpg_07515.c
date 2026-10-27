int test_func(void) {
    int v0 = 43;
    int v1 = 83;
    int v2 = 21;
    int v3 = 38;
    int v4 = 6;
    int v5 = 68;
    int v6 = 91;
    int i;
    v2 = v2 + v5;
    if (v3 > v0) { v3 = v0; }
    v0 = v0 * 8;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v0 = v0 | v4;
    return v0;
}
int main(void) { return test_func(); }
