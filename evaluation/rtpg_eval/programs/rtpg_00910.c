int test_func(void) {
    int v0 = 100;
    int v1 = 38;
    int v2 = 88;
    int v3 = 80;
    int v4 = 45;
    int i;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
