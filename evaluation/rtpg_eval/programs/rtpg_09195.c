int test_func(void) {
    int v0 = 7;
    int v1 = 69;
    int v2 = 12;
    int v3 = 81;
    int v4 = 70;
    int i;
    v2 = v2 - v1;
    v0 = v0 + v3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
