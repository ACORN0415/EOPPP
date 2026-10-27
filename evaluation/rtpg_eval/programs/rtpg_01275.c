int test_func(void) {
    int v0 = 81;
    int v1 = 70;
    int v2 = 99;
    int v3 = 54;
    int i;
    v0 = v0 + v0;
    int *__p = &v1;
    *__p = *__p + 1;
    v3 = v3 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
