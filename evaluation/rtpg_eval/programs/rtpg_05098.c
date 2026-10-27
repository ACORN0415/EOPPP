int test_func(void) {
    int v0 = 29;
    int v1 = 97;
    int v2 = 48;
    int v3 = 51;
    int v4 = 35;
    int v5 = 45;
    int v6 = 52;
    int v7 = 38;
    int i;
    if (v5 > v7) { v5 = v7; }
    v4 = v4 - v5;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
