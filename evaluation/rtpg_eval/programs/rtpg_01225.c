int test_func(void) {
    int v0 = 26;
    int v1 = 57;
    int v2 = 49;
    int v3 = 77;
    int v4 = 77;
    int v5 = 46;
    int v6 = 52;
    int v7 = 19;
    int i;
    v1 = v1 - v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
