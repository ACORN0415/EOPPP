int __arr_9875[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 9;
    int v2 = 7;
    int v3 = 83;
    int v4 = 69;
    int i;
    for (i = 0; i < 10; i++) { __arr_9875[i] = v4 + i; }
    for (i = 0; i < 7; i++) {
        v4 = v4 + v0;
    }
    v0 = v0 - v3;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
