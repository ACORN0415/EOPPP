int __arr_9886[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 50;
    int v2 = 38;
    int i;
    for (i = 0; i < 10; i++) { __arr_9886[i] = v1 + i; }
    int *__p = &v2;
    *__p = *__p + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
