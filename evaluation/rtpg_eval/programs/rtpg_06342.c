int test_func(void) {
    int v0 = 59;
    int v1 = 7;
    int v2 = 59;
    int v3 = 93;
    int v4 = 5;
    int v5 = 94;
    int i;
    v5 = v5 + v0;
    v2 = 51;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
