int test_func(void) {
    int v0 = 51;
    int v1 = 40;
    int v2 = 60;
    int i;
    v2 = v2 + v2;
    v1 = 3;
    int *__p = &v0;
    *__p = *__p + 1;
    v2 = v2 % (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
