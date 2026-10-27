int test_func(void) {
    int v0 = 99;
    int v1 = 21;
    int v2 = 39;
    int v3 = 91;
    int v4 = 59;
    int v5 = 68;
    int v6 = 65;
    int v7 = 74;
    int i;
    v5 = v5 - v0;
    for (i = 0; i < 18; i++) {
        v3 = v3 + v2;
    }
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
