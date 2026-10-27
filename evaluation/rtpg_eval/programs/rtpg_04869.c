int test_func(void) {
    int v0 = 69;
    int v1 = 38;
    int v2 = 25;
    int v3 = 81;
    int i;
    v1 = 32;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
