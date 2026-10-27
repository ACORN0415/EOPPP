int test_func(void) {
    int v0 = 37;
    int v1 = 12;
    int v2 = 56;
    int v3 = 81;
    int v4 = 11;
    int v5 = 23;
    int v6 = 97;
    int i;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
