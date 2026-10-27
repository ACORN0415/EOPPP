int test_func(void) {
    int v0 = 49;
    int v1 = 24;
    int v2 = 96;
    int v3 = 88;
    int i;
    v0 = v0 + v3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
