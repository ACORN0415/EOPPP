int test_func(void) {
    int v0 = 51;
    int v1 = 82;
    int v2 = 100;
    int v3 = 19;
    int v4 = 9;
    int i;
    for (i = 0; i < 9; i++) {
        v4 = v4 + v1;
    }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
