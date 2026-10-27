int __arr_3990[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 24;
    int v2 = 13;
    int i;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_3990[i] = v2 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
