int test_func(void) {
    int v0 = 2;
    int v1 = 84;
    int v2 = 87;
    int v3 = 68;
    int v4 = 40;
    int v5 = 59;
    int i;
    if (v5 > v3) { v5 = v3; }
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
