int test_func(void) {
    int v0 = 3;
    int v1 = 43;
    int v2 = 34;
    int i;
    v1 = v1 - v2;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
