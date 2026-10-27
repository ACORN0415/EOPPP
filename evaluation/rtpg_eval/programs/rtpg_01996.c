int test_func(void) {
    int v0 = 25;
    int v1 = 91;
    int v2 = 98;
    int v3 = 38;
    int v4 = 1;
    int i;
    v2 = 77;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
