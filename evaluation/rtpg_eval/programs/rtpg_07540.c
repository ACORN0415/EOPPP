int test_func(void) {
    int v0 = 95;
    int v1 = 15;
    int v2 = 74;
    int v3 = 53;
    int i;
    if (v0 > v3) { v0 = v3; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
