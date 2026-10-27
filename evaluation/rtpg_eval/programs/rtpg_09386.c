int test_func(void) {
    int v0 = 96;
    int v1 = 10;
    int v2 = 84;
    int v3 = 82;
    int i;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
