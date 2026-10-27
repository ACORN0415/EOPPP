int test_func(void) {
    int v0 = 69;
    int v1 = 15;
    int v2 = 13;
    int v3 = 75;
    int i;
    v0 = v0 + v3;
    v2 = v2 - v1;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
