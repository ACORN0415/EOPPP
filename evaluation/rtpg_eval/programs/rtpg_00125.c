int test_func(void) {
    int v0 = 42;
    int v1 = 32;
    int v2 = 66;
    int v3 = 41;
    int i;
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 10; i++) {
        v0 = v0 + v2;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
