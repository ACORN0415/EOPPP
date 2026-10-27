int test_func(void) {
    int v0 = 37;
    int v1 = 73;
    int v2 = 17;
    int v3 = 93;
    int i;
    v0 = v0 * 3;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v2;
    }
    v1 = v1 + v2;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
