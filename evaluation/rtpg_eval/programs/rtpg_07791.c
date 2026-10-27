int __arr_7791[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 77;
    int v2 = 79;
    int v3 = 67;
    int v4 = 17;
    int i;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_7791[i] = v4 + i; }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
