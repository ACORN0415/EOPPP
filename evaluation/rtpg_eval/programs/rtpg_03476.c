int test_func(void) {
    int v0 = 63;
    int v1 = 65;
    int v2 = 64;
    int i;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v0;
    }
    v0 = v0 - v1;
    v2 = v2 * 3;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
