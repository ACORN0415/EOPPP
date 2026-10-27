int test_func(void) {
    int v0 = 95;
    int v1 = 52;
    int v2 = 89;
    int v3 = 89;
    int i;
    v2 = 38;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
