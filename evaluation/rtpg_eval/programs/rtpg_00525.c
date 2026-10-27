int test_func(void) {
    int v0 = 91;
    int v1 = 9;
    int v2 = 79;
    int i;
    if (v2 > v0) { v2 = v0; }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
