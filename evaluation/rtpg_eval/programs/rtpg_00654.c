int __arr_654[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 85;
    int v2 = 63;
    int v3 = 6;
    int v4 = 99;
    int v5 = 84;
    int v6 = 59;
    int v7 = 74;
    int i;
    v6 = v6 + v2;
    if (v4 > v2) { v4 = v2; }
    for (i = 0; i < 10; i++) { __arr_654[i] = v6 + i; }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
