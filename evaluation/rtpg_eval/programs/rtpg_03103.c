int test_func(void) {
    int v0 = 41;
    int v1 = 25;
    int v2 = 14;
    int v3 = 53;
    int v4 = 11;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
