int test_func(void) {
    int v0 = 15;
    int v1 = 15;
    int v2 = 75;
    int v3 = 16;
    int i;
    if (v1 > v3) { v1 = v3; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
