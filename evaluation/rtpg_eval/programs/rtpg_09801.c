int __arr_9801[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 85;
    int v2 = 27;
    int v3 = 37;
    int v4 = 62;
    int i;
    for (i = 0; i < 10; i++) { __arr_9801[i] = v1 + i; }
    v1 = v1 + v3;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
