int test_func(void) {
    int v0 = 60;
    int v1 = 51;
    int v2 = 76;
    int v3 = 63;
    int v4 = 8;
    int i;
    v4 = 52;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
