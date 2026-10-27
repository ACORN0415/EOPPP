int test_func(void) {
    int v0 = 60;
    int v1 = 89;
    int v2 = 98;
    int v3 = 30;
    int v4 = 92;
    int i;
    v2 = v2 % (v1 + 1);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
