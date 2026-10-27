int test_func(void) {
    int v0 = 51;
    int v1 = 1;
    int v2 = 5;
    int v3 = 88;
    int v4 = 42;
    int v5 = 70;
    int i;
    for (i = 0; i < 12; i++) {
        v5 = v5 + v0;
    }
    v4 = v4 * 4;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
