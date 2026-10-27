int __arr_9472[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 6;
    int v2 = 18;
    int v3 = 63;
    int v4 = 45;
    int i;
    for (i = 0; i < 10; i++) { __arr_9472[i] = v4 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
