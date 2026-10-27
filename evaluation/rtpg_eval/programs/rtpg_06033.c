int __arr_6033[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 33;
    int v2 = 92;
    int v3 = 84;
    int v4 = 65;
    int i;
    for (i = 0; i < 10; i++) { __arr_6033[i] = v1 + i; }
    v3 = v3 + v3;
    v3 = v3 * 5;
    int *__p = &v4;
    *__p = *__p + 1;
    v4 = v4 / (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
