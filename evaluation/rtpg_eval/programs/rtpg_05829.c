int test_func(void) {
    int v0 = 15;
    int v1 = 15;
    int v2 = 84;
    int v3 = 41;
    int i;
    if (v2 > v0) { v2 = v0; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
