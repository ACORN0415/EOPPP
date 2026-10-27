int test_func(void) {
    int v0 = 15;
    int v1 = 19;
    int v2 = 56;
    int v3 = 61;
    int i;
    v1 = 92;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
