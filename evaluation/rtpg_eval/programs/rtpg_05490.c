int test_func(void) {
    int v0 = 30;
    int v1 = 100;
    int v2 = 100;
    int v3 = 64;
    int v4 = 16;
    int i;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v1;
    }
    v0 = v0 - v1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
