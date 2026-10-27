int test_func(void) {
    int v0 = 52;
    int v1 = 96;
    int v2 = 23;
    int v3 = 15;
    int i;
    v2 = v2 + v3;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
