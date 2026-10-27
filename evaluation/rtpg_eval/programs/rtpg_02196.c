int test_func(void) {
    int v0 = 21;
    int v1 = 63;
    int v2 = 61;
    int i;
    v0 = v0 * 7;
    v1 = v1 / (v2 + 1);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
