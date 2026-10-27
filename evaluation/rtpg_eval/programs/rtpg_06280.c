int test_func(void) {
    int v0 = 61;
    int v1 = 5;
    int v2 = 97;
    int v3 = 58;
    int v4 = 86;
    int v5 = 25;
    int i;
    v2 = v2 * 10;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v1;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
