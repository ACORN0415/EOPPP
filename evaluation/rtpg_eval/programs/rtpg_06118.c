int test_func(void) {
    int v0 = 55;
    int v1 = 25;
    int v2 = 56;
    int i;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
