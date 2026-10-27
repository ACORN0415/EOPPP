int test_func(void) {
    int v0 = 24;
    int v1 = 61;
    int v2 = 27;
    int i;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v1;
    }
    v1 = v1 - v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
