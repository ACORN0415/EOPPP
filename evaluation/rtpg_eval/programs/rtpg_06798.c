int __arr_6798[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 27;
    int v2 = 30;
    int v3 = 95;
    int i;
    for (i = 0; i < 10; i++) { __arr_6798[i] = v1 + i; }
    for (i = 0; i < 10; i++) {
        v3 = v3 + v1;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v0 = v0 | v1;
    return v0;
}
int main(void) { return test_func(); }
