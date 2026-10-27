int test_func(void) {
    int v0 = 4;
    int v1 = 66;
    int v2 = 77;
    int v3 = 65;
    int v4 = 45;
    int i;
    v2 = v2 - v3;
    v2 = v2 + v0;
    v4 = v4 % (v0 + 1);
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
