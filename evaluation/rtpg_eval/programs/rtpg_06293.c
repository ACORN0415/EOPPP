int test_func(void) {
    int v0 = 30;
    int v1 = 68;
    int v2 = 15;
    int v3 = 7;
    int v4 = 46;
    int v5 = 29;
    int v6 = 85;
    int i;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
