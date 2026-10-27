int test_func(void) {
    int v0 = 24;
    int v1 = 50;
    int v2 = 44;
    int i;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
