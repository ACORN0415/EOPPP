int test_func(void) {
    int v0 = 50;
    int v1 = 5;
    int v2 = 42;
    int v3 = 37;
    int v4 = 97;
    int i;
    for (i = 0; i < 18; i++) {
        v0 = v0 + v2;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
