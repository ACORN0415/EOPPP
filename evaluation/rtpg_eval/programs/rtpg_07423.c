int test_func(void) {
    int v0 = 62;
    int v1 = 81;
    int v2 = 95;
    int v3 = 65;
    int v4 = 8;
    int v5 = 4;
    int v6 = 48;
    int v7 = 79;
    int i;
    v6 = 45;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v1;
    }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
