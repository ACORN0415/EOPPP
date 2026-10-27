int __arr_9324[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 79;
    int v2 = 39;
    int v3 = 45;
    int v4 = 96;
    int v5 = 20;
    int i;
    v5 = v5 - v1;
    for (i = 0; i < 10; i++) { __arr_9324[i] = v5 + i; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
