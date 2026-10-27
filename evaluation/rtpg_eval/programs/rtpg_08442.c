int test_func(void) {
    int v0 = 43;
    int v1 = 88;
    int v2 = 32;
    int v3 = 70;
    int v4 = 65;
    int v5 = 29;
    int i;
    v1 = v1 + v4;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v5;
    }
    v4 = v4 * 6;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
