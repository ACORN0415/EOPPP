int test_func(void) {
    int v0 = 95;
    int v1 = 6;
    int v2 = 73;
    int i;
    if (v1 > v2) { v1 = v2; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
