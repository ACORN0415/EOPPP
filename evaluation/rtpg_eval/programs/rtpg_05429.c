int test_func(void) {
    int v0 = 93;
    int v1 = 77;
    int v2 = 17;
    int v3 = 32;
    int v4 = 19;
    int v5 = 31;
    int v6 = 31;
    int v7 = 52;
    int i;
    v3 = v3 - v0;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
