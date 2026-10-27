int test_func(void) {
    int v0 = 10;
    int v1 = 67;
    int v2 = 27;
    int i;
    v2 = v2 - v0;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v0;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
