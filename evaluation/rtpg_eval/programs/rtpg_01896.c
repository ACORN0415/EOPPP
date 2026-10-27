int __arr_1896[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 8;
    int v2 = 14;
    int v3 = 24;
    int v4 = 70;
    int v5 = 36;
    int i;
    for (i = 0; i < 13; i++) {
        v5 = v5 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_1896[i] = v4 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
