int test_func(void) {
    int v0 = 52;
    int v1 = 64;
    int v2 = 11;
    int v3 = 78;
    int v4 = 93;
    int v5 = 20;
    int i;
    v5 = 63;
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
