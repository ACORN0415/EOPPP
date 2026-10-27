int test_func(void) {
    int v0 = 48;
    int v1 = 14;
    int v2 = 9;
    int v3 = 24;
    int v4 = 50;
    int v5 = 65;
    int v6 = 59;
    int v7 = 75;
    int i;
    v2 = v2 - v6;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
