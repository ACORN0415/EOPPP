int test_func(void) {
    int v0 = 77;
    int v1 = 28;
    int v2 = 89;
    int v3 = 16;
    int v4 = 64;
    int v5 = 3;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v1;
    }
    v3 = v3 * 9;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
