int test_func(void) {
    int v0 = 66;
    int v1 = 89;
    int v2 = 65;
    int v3 = 19;
    int v4 = 59;
    int v5 = 62;
    int i;
    v2 = v2 * 7;
    v5 = v5 - v3;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
