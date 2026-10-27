int test_func(void) {
    int v0 = 9;
    int v1 = 44;
    int v2 = 18;
    int v3 = 34;
    int i;
    v0 = v0 + v2;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
