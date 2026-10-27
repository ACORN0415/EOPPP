int __arr_9978[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 86;
    int v2 = 57;
    int v3 = 65;
    int i;
    v0 = v0 + v1;
    for (i = 0; i < 10; i++) { __arr_9978[i] = v1 + i; }
    v1 = v1 - v2;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
