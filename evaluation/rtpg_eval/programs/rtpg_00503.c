int test_func(void) {
    int v0 = 43;
    int v1 = 63;
    int v2 = 100;
    int v3 = 53;
    int v4 = 5;
    int v5 = 83;
    int v6 = 55;
    int v7 = 24;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v7;
    }
    v7 = 65;
    v7 = v7 * 6;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
