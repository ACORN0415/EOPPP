int test_func(void) {
    int v0 = 86;
    int v1 = 78;
    int v2 = 17;
    int v3 = 39;
    int i;
    v2 = 28;
    v2 = v2 - v0;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
