int __arr_1295[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 36;
    int v2 = 55;
    int i;
    v1 = v1 - v0;
    for (i = 0; i < 10; i++) { __arr_1295[i] = v1 + i; }
    v1 = v1 + v0;
    return v0;
}
int main(void) { return test_func(); }
