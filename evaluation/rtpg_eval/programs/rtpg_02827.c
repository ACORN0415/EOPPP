int __arr_2827[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 48;
    int v2 = 33;
    int i;
    for (i = 0; i < 10; i++) { __arr_2827[i] = v0 + i; }
    v0 = 100;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v2 = v2 | v1;
    return v0;
}
int main(void) { return test_func(); }
