int test_func(void) {
    int v0 = 29;
    int v1 = 15;
    int v2 = 87;
    int v3 = 74;
    int v4 = 79;
    int v5 = 40;
    int v6 = 21;
    int v7 = 92;
    int i;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v4;
    }
    v7 = v7 + v2;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    v0 = v0 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
