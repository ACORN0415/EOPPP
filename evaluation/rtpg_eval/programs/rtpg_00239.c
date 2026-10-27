int test_func(void) {
    int v0 = 61;
    int v1 = 85;
    int v2 = 84;
    int v3 = 69;
    int v4 = 65;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v2;
    }
    v4 = v4 * 4;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
