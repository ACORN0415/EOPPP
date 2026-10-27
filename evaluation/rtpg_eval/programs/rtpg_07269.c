int test_func(void) {
    int v0 = 95;
    int v1 = 22;
    int v2 = 75;
    int v3 = 48;
    int v4 = 53;
    int v5 = 25;
    int v6 = 11;
    int i;
    v3 = v3 * 8;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
