int __arr_9026[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 17;
    int v2 = 55;
    int v3 = 5;
    int v4 = 40;
    int i;
    v3 = 87;
    for (i = 0; i < 10; i++) { __arr_9026[i] = v2 + i; }
    if (v0 > v2) { v0 = v2; }
    v3 = v3 + v1;
    return v0;
}
int main(void) { return test_func(); }
