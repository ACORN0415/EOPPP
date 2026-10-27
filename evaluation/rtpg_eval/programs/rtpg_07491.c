int test_func(void) {
    int v0 = 42;
    int v1 = 62;
    int v2 = 2;
    int v3 = 5;
    int i;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
