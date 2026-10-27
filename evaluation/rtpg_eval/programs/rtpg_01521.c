int __arr_1521[10];
int test_func(void) {
    int v0 = 89;
    int v1 = 59;
    int v2 = 16;
    int i;
    v2 = v2 + v0;
    for (i = 0; i < 10; i++) { __arr_1521[i] = v1 + i; }
    v1 = v1 - v0;
    int *__p = &v0;
    *__p = *__p + 1;
    v2 = v2 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
