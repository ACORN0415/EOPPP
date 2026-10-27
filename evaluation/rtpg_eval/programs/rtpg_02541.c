int test_func(void) {
    int v0 = 60;
    int v1 = 31;
    int v2 = 44;
    int v3 = 43;
    int v4 = 72;
    int i;
    v2 = v2 - v0;
    v3 = 20;
    v4 = v4 + v4;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
