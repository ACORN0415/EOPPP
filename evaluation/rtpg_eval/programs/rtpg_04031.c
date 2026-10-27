int __arr_4031[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 44;
    int v2 = 76;
    int v3 = 52;
    int i;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_4031[i] = v1 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
