int test_func(void) {
    int v0 = 54;
    int v1 = 79;
    int v2 = 35;
    int v3 = 24;
    int i;
    v3 = v3 + v2;
    v1 = v1 - v3;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
