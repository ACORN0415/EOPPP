int test_func(void) {
    int v0 = 75;
    int v1 = 70;
    int v2 = 25;
    int v3 = 89;
    int v4 = 42;
    int v5 = 7;
    int v6 = 51;
    int v7 = 89;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v2;
    }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
