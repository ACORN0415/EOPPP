int test_func(void) {
    int v0 = 47;
    int v1 = 87;
    int v2 = 55;
    int v3 = 69;
    int i;
    v1 = 27;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
