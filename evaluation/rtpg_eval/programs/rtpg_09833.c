int test_func(void) {
    int v0 = 63;
    int v1 = 56;
    int v2 = 23;
    int v3 = 7;
    int v4 = 34;
    int v5 = 66;
    int i;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
