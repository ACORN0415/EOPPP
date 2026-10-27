int test_func(void) {
    int v0 = 4;
    int v1 = 7;
    int v2 = 10;
    int i;
    v2 = v2 - v1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
