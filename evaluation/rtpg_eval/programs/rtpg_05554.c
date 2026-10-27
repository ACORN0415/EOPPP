int test_func(void) {
    int v0 = 92;
    int v1 = 72;
    int v2 = 75;
    int v3 = 91;
    int i;
    v3 = v3 - v0;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v2;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
