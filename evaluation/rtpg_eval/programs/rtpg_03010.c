int test_func(void) {
    int v0 = 56;
    int v1 = 97;
    int v2 = 47;
    int v3 = 23;
    int v4 = 72;
    int i;
    v0 = v0 - v3;
    v1 = v1 + v0;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
