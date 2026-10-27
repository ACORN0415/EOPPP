int test_func(void) {
    int v0 = 26;
    int v1 = 65;
    int v2 = 20;
    int v3 = 60;
    int v4 = 6;
    int v5 = 30;
    int v6 = 0;
    int i;
    if (v4 > v0) { v4 = v0; }
    v3 = v3 - v2;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    v1 = v1 % (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
