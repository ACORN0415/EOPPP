int test_func(void) {
    int v0 = 62;
    int v1 = 38;
    int v2 = 31;
    int v3 = 76;
    int v4 = 69;
    int v5 = 57;
    int v6 = 87;
    int i;
    v6 = v6 * 5;
    v4 = v4 + v0;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v6;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
