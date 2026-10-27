int test_func(void) {
    int v0 = 80;
    int v1 = 26;
    int v2 = 90;
    int v3 = 7;
    int i;
    if (v3 > v0) { v3 = v0; }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
