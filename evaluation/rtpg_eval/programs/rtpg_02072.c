int test_func(void) {
    int v0 = 46;
    int v1 = 86;
    int v2 = 68;
    int v3 = 31;
    int v4 = 53;
    int v5 = 83;
    int v6 = 22;
    int i;
    v2 = v2 + v6;
    v4 = v4 * 9;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
