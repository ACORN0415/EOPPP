int test_func(void) {
    int v0 = 14;
    int v1 = 9;
    int v2 = 67;
    int i;
    v2 = v2 - v0;
    v1 = v1 + v0;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
