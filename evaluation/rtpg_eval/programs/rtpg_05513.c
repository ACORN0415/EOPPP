int test_func(void) {
    int v0 = 71;
    int v1 = 61;
    int v2 = 93;
    int v3 = 18;
    int v4 = 99;
    int v5 = 83;
    int v6 = 20;
    int i;
    v2 = v2 - v3;
    v3 = v3 * 2;
    v1 = v1 & v5;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
