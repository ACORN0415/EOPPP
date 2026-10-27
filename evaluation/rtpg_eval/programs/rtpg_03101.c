int test_func(void) {
    int v0 = 74;
    int v1 = 80;
    int v2 = 95;
    int v3 = 50;
    int v4 = 56;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v1;
    }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
