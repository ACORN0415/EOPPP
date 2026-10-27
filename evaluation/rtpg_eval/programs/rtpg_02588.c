int test_func(void) {
    int v0 = 69;
    int v1 = 1;
    int v2 = 61;
    int v3 = 66;
    int v4 = 84;
    int i;
    if (v4 > v3) { v4 = v3; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
