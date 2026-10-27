int test_func(void) {
    int v0 = 95;
    int v1 = 50;
    int v2 = 11;
    int v3 = 65;
    int v4 = 73;
    int i;
    v3 = v3 - v0;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v4;
    }
    v4 = v4 * 2;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
