int test_func(void) {
    int v0 = 57;
    int v1 = 68;
    int v2 = 84;
    int v3 = 96;
    int v4 = 17;
    int i;
    v0 = v0 - v3;
    v2 = v2 + v1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
