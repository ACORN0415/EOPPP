int test_func(void) {
    int v0 = 51;
    int v1 = 29;
    int v2 = 35;
    int i;
    v0 = v0 - v1;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v2;
    }
    if (v2 > v0) { v2 = v0; }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
