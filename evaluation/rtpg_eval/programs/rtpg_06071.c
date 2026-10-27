int test_func(void) {
    int v0 = 37;
    int v1 = 4;
    int v2 = 45;
    int v3 = 77;
    int v4 = 69;
    int v5 = 80;
    int i;
    for (i = 0; i < 15; i++) {
        v4 = v4 + v2;
    }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
