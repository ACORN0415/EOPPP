int test_func(void) {
    int v0 = 49;
    int v1 = 73;
    int v2 = 90;
    int v3 = 23;
    int v4 = 4;
    int v5 = 86;
    int v6 = 62;
    int i;
    v2 = 84;
    v0 = v0 - v2;
    v2 = v2 * 8;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
