int test_func(void) {
    int v0 = 98;
    int v1 = 99;
    int v2 = 100;
    int i;
    v1 = v1 - v2;
    v1 = v1 * 5;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
