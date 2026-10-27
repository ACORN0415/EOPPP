int test_func(void) {
    int v0 = 36;
    int v1 = 20;
    int v2 = 3;
    int i;
    if (v2 > v2) { v2 = v2; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
