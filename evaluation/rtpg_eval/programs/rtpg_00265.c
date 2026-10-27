int test_func(void) {
    int v0 = 51;
    int v1 = 80;
    int v2 = 65;
    int v3 = 64;
    int v4 = 69;
    int v5 = 54;
    int v6 = 60;
    int i;
    v6 = 80;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
