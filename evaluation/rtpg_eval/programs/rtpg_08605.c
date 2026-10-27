int test_func(void) {
    int v0 = 43;
    int v1 = 16;
    int v2 = 71;
    int v3 = 89;
    int v4 = 64;
    int v5 = 54;
    int v6 = 66;
    int i;
    v5 = 80;
    v6 = v6 ^ v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
