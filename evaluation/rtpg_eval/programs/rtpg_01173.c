int __arr_1173[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 20;
    int v2 = 63;
    int v3 = 36;
    int v4 = 25;
    int i;
    v4 = v4 - v1;
    for (i = 0; i < 10; i++) { __arr_1173[i] = v3 + i; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
