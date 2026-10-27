int test_func(void) {
    int v0 = 10;
    int v1 = 50;
    int v2 = 93;
    int v3 = 51;
    int v4 = 41;
    int v5 = 49;
    int v6 = 70;
    int v7 = 73;
    int i;
    v7 = v7 + v7;
    int *__p = &v6;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
