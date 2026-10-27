int test_func(void) {
    int v0 = 100;
    int v1 = 59;
    int v2 = 65;
    int v3 = 19;
    int v4 = 38;
    int v5 = 26;
    int i;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v2;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
