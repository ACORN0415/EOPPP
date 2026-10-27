int test_func(void) {
    int v0 = 25;
    int v1 = 9;
    int v2 = 28;
    int v3 = 81;
    int v4 = 57;
    int i;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v0;
    }
    if (v2 > v3) { v2 = v3; }
    v1 = v1 - v2;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
