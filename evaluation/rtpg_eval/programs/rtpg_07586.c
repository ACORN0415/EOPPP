int __arr_7586[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 92;
    int v2 = 27;
    int i;
    if (v0 > v1) { v0 = v1; }
    v1 = v1 - v0;
    for (i = 0; i < 10; i++) { __arr_7586[i] = v0 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
