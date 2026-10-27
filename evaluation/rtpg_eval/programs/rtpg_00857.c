int test_func(void) {
    int v0 = 91;
    int v1 = 48;
    int v2 = 97;
    int i;
    v1 = v1 + v0;
    v1 = v1 * 10;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
