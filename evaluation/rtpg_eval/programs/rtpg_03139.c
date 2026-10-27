int test_func(void) {
    int v0 = 95;
    int v1 = 3;
    int v2 = 51;
    int v3 = 75;
    int v4 = 27;
    int i;
    v1 = v1 + v2;
    v3 = 51;
    v4 = v4 - v1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
