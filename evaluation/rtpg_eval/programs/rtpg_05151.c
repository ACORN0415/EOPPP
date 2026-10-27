int test_func(void) {
    int v0 = 61;
    int v1 = 30;
    int v2 = 56;
    int i;
    v2 = 4;
    int *__p = &v0;
    *__p = *__p + 1;
    v0 = v0 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
