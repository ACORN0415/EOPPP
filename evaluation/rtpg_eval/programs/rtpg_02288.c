int test_func(void) {
    int v0 = 73;
    int v1 = 2;
    int v2 = 3;
    int v3 = 17;
    int v4 = 72;
    int v5 = 84;
    int i;
    if (v5 > v5) { v5 = v5; }
    v0 = 31;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
