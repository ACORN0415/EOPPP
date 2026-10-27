int test_func(void) {
    int v0 = 65;
    int v1 = 24;
    int v2 = 81;
    int v3 = 81;
    int i;
    v3 = v3 + v0;
    v1 = 20;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
