int test_func(void) {
    int v0 = 16;
    int v1 = 85;
    int v2 = 19;
    int v3 = 54;
    int v4 = 41;
    int i;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v0;
    }
    v4 = v4 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
