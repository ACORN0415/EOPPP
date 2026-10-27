int test_func(void) {
    int v0 = 16;
    int v1 = 79;
    int v2 = 53;
    int v3 = 44;
    int v4 = 84;
    int v5 = 91;
    int i;
    v0 = v0 - v1;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
