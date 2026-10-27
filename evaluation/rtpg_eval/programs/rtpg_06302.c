int test_func(void) {
    int v0 = 15;
    int v1 = 89;
    int v2 = 66;
    int v3 = 49;
    int v4 = 86;
    int v5 = 74;
    int v6 = 61;
    int v7 = 16;
    int i;
    if (v3 > v3) { v3 = v3; }
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
