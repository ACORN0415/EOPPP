int test_func(void) {
    int v0 = 92;
    int v1 = 40;
    int v2 = 33;
    int v3 = 4;
    int v4 = 34;
    int v5 = 4;
    int v6 = 99;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v0;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
