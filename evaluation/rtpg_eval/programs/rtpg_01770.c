int test_func(void) {
    int v0 = 79;
    int v1 = 18;
    int v2 = 95;
    int v3 = 12;
    int i;
    v2 = v2 * 2;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
