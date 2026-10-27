int __arr_9172[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 3;
    int v2 = 65;
    int v3 = 64;
    int v4 = 98;
    int i;
    for (i = 0; i < 10; i++) { __arr_9172[i] = v1 + i; }
    v2 = v2 * 6;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
