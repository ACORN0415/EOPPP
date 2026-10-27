int test_func(void) {
    int v0 = 96;
    int v1 = 92;
    int v2 = 9;
    int v3 = 56;
    int v4 = 37;
    int v5 = 61;
    int v6 = 22;
    int i;
    v2 = 38;
    if (v2 > v1) { v2 = v1; }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
