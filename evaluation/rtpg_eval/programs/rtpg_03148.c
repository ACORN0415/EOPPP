int test_func(void) {
    int v0 = 93;
    int v1 = 65;
    int v2 = 36;
    int v3 = 23;
    int v4 = 75;
    int v5 = 45;
    int i;
    if (v5 > v2) { v5 = v2; }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
