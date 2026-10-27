int test_func(void) {
    int v0 = 66;
    int v1 = 51;
    int v2 = 15;
    int v3 = 58;
    int v4 = 30;
    int v5 = 3;
    int i;
    v5 = 26;
    v1 = v1 - v0;
    v3 = v3 + v0;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
