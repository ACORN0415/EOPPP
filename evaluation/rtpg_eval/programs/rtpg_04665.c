int test_func(void) {
    int v0 = 48;
    int v1 = 70;
    int v2 = 62;
    int i;
    v1 = 89;
    v2 = v2 | v0;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
