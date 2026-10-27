int test_func(void) {
    int v0 = 67;
    int v1 = 2;
    int v2 = 59;
    int v3 = 92;
    int v4 = 8;
    int i;
    v2 = v2 - v0;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
