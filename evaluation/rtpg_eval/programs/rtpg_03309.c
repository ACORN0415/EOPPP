int test_func(void) {
    int v0 = 25;
    int v1 = 57;
    int v2 = 95;
    int v3 = 83;
    int i;
    v1 = v1 + v0;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
