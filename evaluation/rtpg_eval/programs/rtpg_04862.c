int test_func(void) {
    int v0 = 91;
    int v1 = 90;
    int v2 = 69;
    int i;
    v1 = v1 - v0;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
