int test_func(void) {
    int v0 = 26;
    int v1 = 6;
    int v2 = 43;
    int v3 = 78;
    int v4 = 54;
    int v5 = 63;
    int i;
    v5 = v5 - v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
