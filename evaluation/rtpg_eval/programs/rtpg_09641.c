int __arr_9641[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 30;
    int v2 = 62;
    int v3 = 34;
    int v4 = 66;
    int v5 = 90;
    int i;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_9641[i] = v1 + i; }
    v1 = v1 - v3;
    return v0;
}
int main(void) { return test_func(); }
