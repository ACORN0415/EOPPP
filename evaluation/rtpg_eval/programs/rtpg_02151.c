int test_func(void) {
    int v0 = 90;
    int v1 = 1;
    int v2 = 43;
    int v3 = 25;
    int v4 = 37;
    int i;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
