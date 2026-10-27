int test_func(void) {
    int v0 = 65;
    int v1 = 72;
    int v2 = 83;
    int v3 = 90;
    int v4 = 51;
    int v5 = 77;
    int v6 = 23;
    int i;
    v5 = v5 + v0;
    if (v3 > v3) { v3 = v3; }
    v2 = v2 ^ v3;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
