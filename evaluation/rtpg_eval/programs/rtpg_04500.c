int test_func(void) {
    int v0 = 78;
    int v1 = 15;
    int v2 = 95;
    int v3 = 59;
    int i;
    v2 = 2;
    if (v0 > v0) { v0 = v0; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
