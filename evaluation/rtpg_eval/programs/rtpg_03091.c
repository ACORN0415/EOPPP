int test_func(void) {
    int v0 = 48;
    int v1 = 47;
    int v2 = 13;
    int v3 = 5;
    int v4 = 66;
    int v5 = 4;
    int v6 = 74;
    int v7 = 26;
    int i;
    v3 = v3 + v4;
    v1 = v1 & v2;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
