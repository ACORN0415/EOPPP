int __arr_8416[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 4;
    int v2 = 84;
    int v3 = 6;
    int i;
    for (i = 0; i < 10; i++) { __arr_8416[i] = v1 + i; }
    v1 = 64;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
