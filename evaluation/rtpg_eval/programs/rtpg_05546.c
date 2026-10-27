int test_func(void) {
    int v0 = 50;
    int v1 = 31;
    int v2 = 25;
    int v3 = 60;
    int v4 = 14;
    int v5 = 19;
    int i;
    v5 = v5 + v0;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
