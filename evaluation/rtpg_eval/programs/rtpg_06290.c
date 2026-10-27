int test_func(void) {
    int v0 = 96;
    int v1 = 51;
    int v2 = 93;
    int v3 = 65;
    int v4 = 88;
    int i;
    if (v0 > v3) { v0 = v3; }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
