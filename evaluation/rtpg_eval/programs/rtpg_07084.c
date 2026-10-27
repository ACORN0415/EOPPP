int test_func(void) {
    int v0 = 96;
    int v1 = 71;
    int v2 = 70;
    int v3 = 25;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v1;
    }
    v3 = v3 + v0;
    v0 = v0 * 8;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = v0 & v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
