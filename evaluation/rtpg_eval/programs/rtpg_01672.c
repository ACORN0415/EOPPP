int test_func(void) {
    int v0 = 27;
    int v1 = 25;
    int v2 = 64;
    int v3 = 99;
    int v4 = 75;
    int i;
    v3 = v3 - v2;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v4;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v4 = v4 / (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
