int test_func(void) {
    int v0 = 16;
    int v1 = 31;
    int v2 = 68;
    int v3 = 54;
    int v4 = 8;
    int v5 = 0;
    int v6 = 67;
    int i;
    v3 = 31;
    if (v0 > v6) { v0 = v6; }
    v2 = v2 - v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
