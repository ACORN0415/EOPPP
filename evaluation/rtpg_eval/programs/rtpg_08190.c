int test_func(void) {
    int v0 = 25;
    int v1 = 18;
    int v2 = 34;
    int i;
    v0 = v0 - v2;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
