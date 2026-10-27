int test_func(void) {
    int v0 = 34;
    int v1 = 42;
    int v2 = 24;
    int i;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
