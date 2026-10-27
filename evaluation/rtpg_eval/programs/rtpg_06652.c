int test_func(void) {
    int v0 = 94;
    int v1 = 37;
    int v2 = 88;
    int v3 = 92;
    int v4 = 36;
    int i;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
