int test_func(void) {
    int v0 = 6;
    int v1 = 37;
    int v2 = 65;
    int v3 = 100;
    int v4 = 83;
    int v5 = 24;
    int i;
    v2 = v2 - v4;
    v3 = 10;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    v1 = v1 % (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
