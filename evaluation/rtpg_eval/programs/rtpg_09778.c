int __arr_9778[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 88;
    int v2 = 36;
    int v3 = 100;
    int v4 = 81;
    int v5 = 93;
    int v6 = 38;
    int v7 = 74;
    int i;
    for (i = 0; i < 10; i++) { __arr_9778[i] = v7 + i; }
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
