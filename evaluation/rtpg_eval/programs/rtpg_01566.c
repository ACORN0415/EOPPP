int test_func(void) {
    int v0 = 56;
    int v1 = 78;
    int v2 = 50;
    int v3 = 52;
    int v4 = 17;
    int i;
    if (v1 > v1) { v1 = v1; }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
