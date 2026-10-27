int test_func(void) {
    int v0 = 28;
    int v1 = 98;
    int v2 = 36;
    int v3 = 39;
    int i;
    v1 = v1 + v1;
    if (v1 > v1) { v1 = v1; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
