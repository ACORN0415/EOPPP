int test_func(void) {
    int v0 = 34;
    int v1 = 69;
    int v2 = 11;
    int v3 = 74;
    int i;
    v0 = v0 - v3;
    v2 = 30;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
