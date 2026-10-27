int test_func(void) {
    int v0 = 19;
    int v1 = 99;
    int v2 = 80;
    int v3 = 22;
    int i;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
