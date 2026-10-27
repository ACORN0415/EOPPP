int test_func(void) {
    int v0 = 62;
    int v1 = 79;
    int v2 = 49;
    int v3 = 71;
    int v4 = 33;
    int i;
    v0 = 23;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
