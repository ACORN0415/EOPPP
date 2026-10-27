int test_func(void) {
    int v0 = 8;
    int v1 = 10;
    int v2 = 93;
    int v3 = 53;
    int v4 = 97;
    int v5 = 47;
    int i;
    v1 = v1 - v0;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
