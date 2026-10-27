int test_func(void) {
    int v0 = 57;
    int v1 = 12;
    int v2 = 79;
    int v3 = 89;
    int v4 = 38;
    int i;
    for (i = 0; i < 18; i++) {
        v4 = v4 + v3;
    }
    v2 = v2 - v4;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
