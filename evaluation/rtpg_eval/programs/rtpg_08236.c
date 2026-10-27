int test_func(void) {
    int v0 = 97;
    int v1 = 4;
    int v2 = 83;
    int v3 = 96;
    int v4 = 92;
    int i;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v4;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v1 = v1 % (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
