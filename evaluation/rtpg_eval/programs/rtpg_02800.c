int test_func(void) {
    int v0 = 23;
    int v1 = 40;
    int v2 = 75;
    int i;
    v0 = v0 - v1;
    v2 = 57;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
