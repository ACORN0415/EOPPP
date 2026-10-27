int test_func(void) {
    int v0 = 41;
    int v1 = 6;
    int v2 = 18;
    int i;
    v2 = 49;
    if (v1 > v1) { v1 = v1; }
    v1 = v1 - v0;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
