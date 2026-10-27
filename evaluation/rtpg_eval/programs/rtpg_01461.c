int test_func(void) {
    int v0 = 39;
    int v1 = 77;
    int v2 = 83;
    int v3 = 77;
    int v4 = 78;
    int i;
    v4 = v4 + v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
