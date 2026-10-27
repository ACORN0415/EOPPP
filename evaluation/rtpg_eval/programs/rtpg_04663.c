int test_func(void) {
    int v0 = 5;
    int v1 = 21;
    int v2 = 59;
    int v3 = 9;
    int v4 = 23;
    int i;
    if (v3 > v2) { v3 = v2; }
    v4 = 25;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
