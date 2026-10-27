int test_func(void) {
    int v0 = 1;
    int v1 = 16;
    int v2 = 2;
    int v3 = 72;
    int v4 = 41;
    int i;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v1;
    }
    v2 = v2 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
