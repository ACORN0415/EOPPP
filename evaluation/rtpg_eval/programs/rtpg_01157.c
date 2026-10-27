int __arr_1157[10];
int test_func(void) {
    int v0 = 89;
    int v1 = 88;
    int v2 = 88;
    int i;
    v1 = 38;
    for (i = 0; i < 10; i++) { __arr_1157[i] = v0 + i; }
    v0 = v0 - v1;
    return v0;
}
int main(void) { return test_func(); }
