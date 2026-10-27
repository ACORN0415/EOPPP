int test_func(void) {
    int v0 = 37;
    int v1 = 83;
    int v2 = 74;
    int v3 = 48;
    int i;
    v3 = 0;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v3 = v3 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
