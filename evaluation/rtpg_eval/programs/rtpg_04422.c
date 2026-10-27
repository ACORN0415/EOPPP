int test_func(void) {
    int v0 = 72;
    int v1 = 51;
    int v2 = 53;
    int v3 = 87;
    int v4 = 63;
    int v5 = 30;
    int v6 = 52;
    int i;
    v0 = 5;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
