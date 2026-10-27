int test_func(void) {
    int v0 = 31;
    int v1 = 18;
    int v2 = 92;
    int v3 = 16;
    int i;
    v1 = v1 ^ v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
