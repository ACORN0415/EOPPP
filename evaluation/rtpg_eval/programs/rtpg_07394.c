int test_func(void) {
    int v0 = 67;
    int v1 = 19;
    int v2 = 88;
    int i;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v2;
    }
    if (v1 > v2) { v1 = v2; }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
