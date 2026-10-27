int __arr_9035[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 33;
    int v2 = 52;
    int v3 = 44;
    int v4 = 48;
    int i;
    for (i = 0; i < 10; i++) { __arr_9035[i] = v2 + i; }
    v2 = 26;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
