int test_func(void) {
    int v0 = 73;
    int v1 = 22;
    int v2 = 36;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v1;
    }
    v1 = v1 - v2;
    if (v1 > v2) { v1 = v2; }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
